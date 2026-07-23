/*
 * XREFs of sub_14023AB60 @ 0x14023AB60
 * Callers:
 *     sub_14023AAF0 @ 0x14023AAF0 (sub_14023AAF0.c)
 *     sub_1403ADC74 @ 0x1403ADC74 (sub_1403ADC74.c)
 *     sub_1403ADF94 @ 0x1403ADF94 (sub_1403ADF94.c)
 *     sub_1403B3DD0 @ 0x1403B3DD0 (sub_1403B3DD0.c)
 *     sub_14045945E @ 0x14045945E (sub_14045945E.c)
 *     sub_140523C80 @ 0x140523C80 (sub_140523C80.c)
 *     sub_14052D9A0 @ 0x14052D9A0 (sub_14052D9A0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14023AC88 @ 0x14023AC88 (sub_14023AC88.c)
 *     sub_14023AE0C @ 0x14023AE0C (sub_14023AE0C.c)
 *     sub_1403CAB68 @ 0x1403CAB68 (sub_1403CAB68.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14023AB60(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned int a3,
        void *a4,
        unsigned int BugCheckParameter3,
        unsigned int Size,
        int a7)
{
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // r15
  unsigned int v10; // r12d
  __int64 *v11; // r8
  char v12; // r9
  int v13; // edx
  __int64 result; // rax
  int v15; // edx
  unsigned __int8 v16; // bl
  unsigned int v17; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax
  bool v22; // zf
  _BYTE v23[16]; // [rsp+50h] [rbp-28h] BYREF

  v8 = a3;
  v9 = a2;
  v10 = (unsigned __int16)a1;
  v23[0] = 0;
  if ( byte_140C4BCB0 )
    goto LABEL_3;
  v11 = (__int64 *)qword_140C4BCE0;
  v12 = 0;
  if ( (__int64 *)qword_140C4BCE0 == &qword_140C4BCE0 )
    goto LABEL_3;
  do
  {
    a1 = (unsigned int *)v11;
    v11 = (__int64 *)*v11;
    result = a1[118];
    if ( (result & 8) != 0 && a1[120] == v10 && a1[121] == (_DWORD)v9 )
    {
      v17 = a1[122];
      result = (unsigned int)v8 ^ v17;
      if ( (((unsigned __int8)v8 ^ *((_BYTE *)a1 + 488)) & 0x1F) == 0
        && (((unsigned __int8)v8 ^ (unsigned __int8)v17) & 0xE0) == 0 )
      {
        v12 = 1;
      }
    }
  }
  while ( v11 != &qword_140C4BCE0 );
  if ( !v12 )
  {
LABEL_3:
    if ( qword_140C4C548 )
    {
      LOBYTE(a1) = a7 == 1;
      result = sub_14042A5E0(a1, v10);
      if ( (int)result >= 0 )
        return result;
      if ( (_DWORD)result != -1073741822 )
        KeBugCheckEx(0xC0u, v9, v8, BugCheckParameter3, (int)result);
    }
    sub_14023AE0C(v23);
    LOBYTE(v13) = v9;
    result = sub_14023AC88((unsigned __int16)v10, v13, v8, (_DWORD)a4, BugCheckParameter3, Size, a7);
    if ( !(_BYTE)result )
    {
      LOBYTE(v15) = v9;
      result = sub_1403CAB68((unsigned __int16)v10, v15, v8, (_DWORD)a4, BugCheckParameter3, Size, a7);
      if ( !(_BYTE)result && !a7 )
        result = (__int64)memset(a4, 255, Size);
    }
    if ( !byte_140C4BF30 )
    {
      KeReleaseSpinLockFromDpcLevel(&qword_140C4BCA8);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v16 = v23[0];
        if ( v23[0] <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = *((_QWORD *)CurrentPrcb + 4375);
          v16 = v23[0];
          v21 = ~(unsigned __int16)(-1LL << (v23[0] + 1));
          v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v22 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      else
      {
        v16 = v23[0];
      }
      result = v16;
      __writecr8(v16);
    }
  }
  else if ( !a7 )
  {
    return (__int64)memset(a4, 255, Size);
  }
  return result;
}
