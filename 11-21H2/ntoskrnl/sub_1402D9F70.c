/*
 * XREFs of sub_1402D9F70 @ 0x1402D9F70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402DA448 @ 0x1402DA448 (sub_1402DA448.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1402D9F70(__int64 a1, _QWORD *a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *v4; // r15
  ULONG ActiveProcessorCount; // eax
  __int64 *v6; // rdi
  __int64 v7; // rsi
  ULONG_PTR v8; // rcx
  __int64 result; // rax
  __int64 v10; // r9
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v13; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  __int64 v18; // r8
  int v19; // eax
  ULONG v20; // [rsp+70h] [rbp+40h]
  int v21; // [rsp+78h] [rbp+48h] BYREF
  __int64 v22; // [rsp+80h] [rbp+50h]

  v21 = 0;
  v22 = 0LL;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( (unsigned __int8)sub_1402DA448(&qword_140D313C0) )
      break;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v11 = KeGetCurrentIrql();
        if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v13 = *((_QWORD *)CurrentPrcb + 4375);
          v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
          *(_DWORD *)(v13 + 20) &= v14;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    sub_1402F32E0(&v21);
  }
  v21 = 0;
  v4 = KeGetCurrentPrcb();
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v20 = ActiveProcessorCount;
  HIDWORD(v22) = ActiveProcessorCount;
  LODWORD(v22) = ActiveProcessorCount;
  if ( ActiveProcessorCount )
  {
    v6 = qword_140D088C0;
    v7 = ActiveProcessorCount;
    do
    {
      if ( (struct _KPRCB *)*v6 != v4 )
      {
        v8 = *v6 + 32352;
        *(_QWORD *)(v8 + 24) = *a2;
        *(_QWORD *)(v8 + 32) = a2[1];
        sub_140345190(v8, 0);
      }
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  sub_14042A5E0((char *)v4 + 32352, a2[1]);
  while ( v20 )
    sub_1402F32E0(&v21);
  KeReleaseSpinLockFromDpcLevel(&qword_140D313C0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = *((_QWORD *)v17 + 4375);
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v15 )
          sub_140418E4C(v17);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
