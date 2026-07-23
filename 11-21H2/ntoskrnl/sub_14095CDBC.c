/*
 * XREFs of sub_14095CDBC @ 0x14095CDBC
 * Callers:
 *     sub_140B0ED44 @ 0x140B0ED44 (sub_140B0ED44.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 *     sub_140772AA0 @ 0x140772AA0 (sub_140772AA0.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14095CDBC(char a1, char *a2)
{
  char v3; // r12
  __int64 BufferLengthIn; // rsi
  NTSTATUS PersistedStateLocation; // eax
  int v7; // ebx
  WCHAR *TargetPath; // rdi
  __int64 i; // rsi
  const WCHAR *v11; // rdx
  int v12; // [rsp+60h] [rbp-20h] BYREF
  int v13; // [rsp+64h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-18h]
  __int64 Source2; // [rsp+70h] [rbp-10h] BYREF
  __int64 Source1; // [rsp+78h] [rbp-8h] BYREF
  ULONG BufferLengthOut; // [rsp+D0h] [rbp+50h] BYREF
  int v18; // [rsp+D8h] [rbp+58h] BYREF

  v3 = 0;
  Handle = 0LL;
  Source1 = 0LL;
  Source2 = 0LL;
  BufferLengthIn = 520LL;
  v18 = 0;
  v12 = 0;
  v13 = 0;
  for ( BufferLengthOut = 0; ; BufferLengthIn = BufferLengthOut )
  {
    TargetPath = (WCHAR *)ExAllocatePool2(256LL, BufferLengthIn, 1650749520LL);
    if ( !TargetPath )
    {
      v7 = -1073741670;
      goto LABEL_7;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"DriverDatabaseUpdates",
                               0LL,
                               L"\\Registry\\Machine\\System\\DriverDatabase\\Updates",
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    v7 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    ExFreePoolWithTag(TargetPath, 0);
    TargetPath = 0LL;
    if ( BufferLengthOut <= (unsigned int)BufferLengthIn )
    {
      v7 = -1073741595;
      goto LABEL_7;
    }
  }
  if ( PersistedStateLocation >= 0 )
  {
    v7 = sub_140772AA0(0LL);
    if ( v7 >= 0 )
    {
      for ( i = qword_140C445B0; (__int64 *)i != &qword_140C445B0; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 64) & 4) == 0 || !byte_140C097C4 )
        {
          if ( (int)sub_14077DA5C(
                      *(__int64 *)&qword_140D00AC0,
                      *(_QWORD *)(i + 24),
                      7,
                      *(_QWORD *)(i + 72),
                      0LL,
                      (__int64)qword_14001CE50,
                      (__int64)&v18,
                      (__int64)&Source1,
                      8,
                      (__int64)&v12,
                      0) >= 0
            && v18 == 16
            && v12 == 8 )
          {
            v11 = *(const WCHAR **)(i + 24);
            BufferLengthOut = 8;
            v7 = sub_14077FC64(Handle, v11, &v13, &Source2, &BufferLengthOut);
            if ( v7 < 0 || v13 != 3 || BufferLengthOut != 8 )
            {
              v7 = 0;
              Source2 = 0LL;
            }
            if ( RtlCompareMemory(&Source1, &Source2, 8uLL) != 8 )
            {
              v3 = 1;
              if ( !a1 )
                break;
              v7 = sub_1406D5A30(Handle, *(const WCHAR **)(i + 24), 3u, &Source1, 8u);
              if ( v7 < 0 )
                goto LABEL_7;
            }
          }
          else
          {
            v7 = 0;
          }
        }
      }
      if ( a2 )
        *a2 = v3;
    }
  }
LABEL_7:
  if ( Handle )
    ZwClose(Handle);
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  return (unsigned int)v7;
}
