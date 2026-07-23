/*
 * XREFs of sub_140581A70 @ 0x140581A70
 * Callers:
 *     sub_140A6A1B0 @ 0x140A6A1B0 (sub_140A6A1B0.c)
 * Callees:
 *     sub_140245968 @ 0x140245968 (sub_140245968.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14059A568 @ 0x14059A568 (sub_14059A568.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

LONG __fastcall sub_140581A70(PVOID P)
{
  __int64 *v2; // rsi
  unsigned __int8 v3; // cf
  unsigned int v4; // ebx
  int v5; // r15d
  unsigned int v6; // r12d
  KIRQL v7; // al
  __int64 v8; // rdx
  unsigned int v9; // r8d
  KIRQL v10; // r14
  unsigned __int64 v11; // rdi
  unsigned int v12; // eax
  bool v13; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  KIRQL v19; // al
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r8
  __int64 v22; // rdi
  int v23; // eax
  int v25; // [rsp+28h] [rbp-A9h]
  unsigned __int64 v26; // [rsp+30h] [rbp-A1h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-99h] BYREF
  PRKEVENT Event; // [rsp+40h] [rbp-91h]
  _BYTE MemoryDescriptorList[176]; // [rsp+48h] [rbp-89h] BYREF

  v27 = 0LL;
  v26 = 0LL;
  memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  v2 = (__int64 *)*((_QWORD *)P + 4);
  Event = (PRKEVENT)*((_QWORD *)P + 5);
  ExFreePoolWithTag(P, 0);
  v3 = _bittest16((const signed __int16 *)v2 + 102, 0xBu);
  *(_QWORD *)&MemoryDescriptorList[32] = 0LL;
  *(_QWORD *)&MemoryDescriptorList[40] = 0LL;
  if ( v3 )
  {
    *(_DWORD *)&MemoryDescriptorList[8] = 131120;
    memset64(&MemoryDescriptorList[48], qword_140C53290, 0x10uLL);
  }
  else
  {
    *(_DWORD *)&MemoryDescriptorList[8] = 48;
  }
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 58);
  v8 = *v2;
  v9 = 1;
  v25 = 1;
  v10 = v7;
  if ( (unsigned __int64)*v2 > 1 )
  {
    v11 = 1LL;
    while ( _bittest64(*(const signed __int64 **)(v2[14] + 16), v11) )
    {
      if ( v4 )
        goto LABEL_14;
LABEL_13:
      if ( v5 )
      {
LABEL_14:
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 58);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v16 = *((_QWORD *)CurrentPrcb + 4375);
              v17 = ~(unsigned __int16)(-1LL << (v10 + 1));
              v13 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
              *(_DWORD *)(v16 + 20) &= v17;
              if ( v13 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v10);
        if ( _bittest16((const signed __int16 *)v2 + 102, 0xBu) )
        {
          *(_DWORD *)&MemoryDescriptorList[40] = v4 << 12;
          sub_14059A568(v2, MemoryDescriptorList, v6, 0LL);
        }
        else
        {
          v18 = v2[7];
          v27 = (unsigned __int64)v6 << 12;
          v26 = (unsigned __int64)v4 << 12;
          sub_140245968(v18, (__int64)&v27, (__int64 *)&v26, 0);
        }
        v5 = 0;
        v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v2 + 58);
        v9 = v25;
        v10 = v19;
        v4 = 0;
      }
      v8 = *v2;
      v11 = ++v9;
      v25 = v9;
      if ( v9 >= (unsigned __int64)*v2 )
        goto LABEL_26;
    }
    v12 = v4 + 1;
    v13 = v4++ == 0;
    if ( v13 )
    {
      v6 = v9;
    }
    else if ( v12 == 16 )
    {
LABEL_11:
      v5 = 1;
      goto LABEL_13;
    }
    if ( v11 != v8 - 1 )
      goto LABEL_13;
    goto LABEL_11;
  }
LABEL_26:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v2 + 58);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v20 = KeGetCurrentIrql();
      if ( v20 <= 0xFu && v10 <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = *((_QWORD *)v21 + 4375);
        v23 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v13 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
        *(_DWORD *)(v22 + 20) &= v23;
        if ( v13 )
          sub_140418E4C((__int64)v21);
      }
    }
  }
  __writecr8(v10);
  if ( _bittest16((const signed __int16 *)v2 + 102, 0xBu) && (MemoryDescriptorList[10] & 1) != 0 )
    MmUnmapLockedPages(*(PVOID *)&MemoryDescriptorList[24], (PMDL)MemoryDescriptorList);
  return KeSetEvent(Event, 0, 0);
}
