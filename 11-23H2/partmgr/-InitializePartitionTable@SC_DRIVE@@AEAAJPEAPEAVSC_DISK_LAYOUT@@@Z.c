/*
 * XREFs of ?InitializePartitionTable@SC_DRIVE@@AEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0005930
 * Callers:
 *     ?CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z @ 0x1C0005704 (-CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z.c)
 * Callees:
 *     ?AddEntries@SC_DISK_LAYOUT@@QEAAPEAV1@K@Z @ 0x1C0005AA8 (-AddEntries@SC_DISK_LAYOUT@@QEAAPEAV1@K@Z.c)
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1C0005D84 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1C0008CC4 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?ResetPartitionCache@SC_DISK@@QEAAJXZ @ 0x1C0008E7C (-ResetPartitionCache@SC_DISK@@QEAAJXZ.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x1C001EA54 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_DRIVE::InitializePartitionTable(SC_DRIVE *this, struct SC_DISK_LAYOUT **a2)
{
  int Guid; // ebx
  unsigned int v5; // edx
  struct SC_DISK_LAYOUT *v6; // rax
  struct SC_DISK_LAYOUT *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  char *v10; // rcx
  signed __int64 v11; // r9
  __int16 v12; // ax
  char *v13; // rax
  _CREATE_DISK v15; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  memset(&v15, 0, sizeof(v15));
  v15.PartitionStyle = PARTITION_STYLE_GPT;
  P = 0LL;
  Guid = SC_ENV::CreateGuid(&v15.Gpt.DiskId);
  if ( Guid >= 0 )
  {
    Guid = SC_DISK::CreatePartitionTable(this, &v15);
    if ( Guid >= 0 )
    {
      Guid = SC_DISK::ResetPartitionCache(this);
      if ( Guid >= 0 )
      {
        Guid = SC_DISK::ReadPartitionTable(this, (struct SC_DISK_LAYOUT **)&P);
        if ( Guid >= 0 )
        {
          v6 = SC_DISK_LAYOUT::AddEntries((SC_DISK_LAYOUT *)P, v5);
          v7 = v6;
          if ( v6 )
          {
            v8 = 36LL;
            v9 = 144LL * (unsigned int)(*((_DWORD *)v6 + 1) - 1);
            v10 = (char *)v6 + v9 + 120;
            *(_DWORD *)((char *)v6 + v9 + 48) = 1;
            *(_QWORD *)((char *)v6 + v9 + 56) = *((_QWORD *)v6 + 3);
            *(_QWORD *)((char *)v6 + v9 + 64) = 0x1000000LL - *((_QWORD *)v6 + 3);
            v11 = (char *)L"Microsoft reserved partition" - v10;
            *((_BYTE *)v6 + v9 + 76) = 1;
            *(GUID *)((char *)v6 + v9 + 80) = PARTITION_MSFT_RESERVED_GUID;
            do
            {
              if ( v8 == -2147483610 )
                break;
              v12 = *(_WORD *)&v10[v11];
              if ( !v12 )
                break;
              *(_WORD *)v10 = v12;
              v10 += 2;
              --v8;
            }
            while ( v8 );
            v13 = v10 - 2;
            if ( v8 )
              v13 = v10;
            *(_WORD *)v13 = 0;
            Guid = SC_ENV::CreateGuid((struct _GUID *)((char *)v7 + v9 + 96));
            if ( Guid < 0 )
              ExFreePoolWithTag(v7, 0);
            else
              *a2 = v7;
          }
          else
          {
            Guid = -1073741670;
          }
        }
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
    }
  }
  return (unsigned int)Guid;
}
