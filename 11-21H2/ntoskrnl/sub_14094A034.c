/*
 * XREFs of sub_14094A034 @ 0x14094A034
 * Callers:
 *     sub_140778100 @ 0x140778100 (sub_140778100.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14069717C @ 0x14069717C (sub_14069717C.c)
 *     sub_14069984C @ 0x14069984C (sub_14069984C.c)
 *     sub_14069A184 @ 0x14069A184 (sub_14069A184.c)
 *     sub_140778B24 @ 0x140778B24 (sub_140778B24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14094A034(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        _WORD *a5,
        const void **a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v8; // r14d
  PVOID v10; // rbx
  int v11; // r15d
  int v12; // edi
  __int64 v13; // r9
  unsigned int *v14; // rsi
  unsigned int v15; // eax
  const void **v16; // r12
  unsigned int v17; // edx
  unsigned int v18; // r8d
  __int64 v19; // rax
  HANDLE Handle; // [rsp+50h] [rbp-10h] BYREF
  PVOID v22; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+50h] BYREF

  v8 = 0;
  Handle = 0LL;
  v24 = 0;
  v10 = 0LL;
  v11 = 0;
  v22 = 0LL;
  if ( a2 != 1 )
    v11 = a3;
  v12 = sub_14069984C(a2, a4, a3, 1, 0, a1, &Handle);
  if ( v12 >= 0 )
  {
    v12 = sub_14069717C(a4, v11, (int)Handle, v13, &v22, &v24);
    if ( v12 >= 0 )
    {
      v14 = a7;
      v15 = v24;
      v16 = a6;
      v17 = *a7;
      v18 = *a7 + v24;
      if ( *a8 < v18 )
      {
        *a8 = v18;
        v12 = sub_14069A184(v16, v17, v18);
        if ( v12 < 0 )
          goto LABEL_13;
        v15 = v24;
      }
      if ( v15 )
      {
        v19 = *v14;
        v10 = v22;
        do
        {
          v12 = sub_140778B24(a4, v11, (int)Handle, (unsigned int)v10 + 20 * v8, a2, a5, (_OWORD *)*v16 + 3 * v19);
          if ( v12 < 0 )
            break;
          ++*v14;
          ++v8;
          v19 = *v14;
        }
        while ( v8 < v24 );
        goto LABEL_14;
      }
    }
LABEL_13:
    v10 = v22;
  }
LABEL_14:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  return (unsigned int)v12;
}
