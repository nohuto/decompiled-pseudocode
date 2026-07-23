/*
 * XREFs of MmSetGraphicsPtes @ 0x14096B560
 * Callers:
 *     <none>
 * Callees:
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EBF4 @ 0x14030EBF4 (sub_14030EBF4.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14058C874 @ 0x14058C874 (sub_14058C874.c)
 *     sub_1405AAF9C @ 0x1405AAF9C (sub_1405AAF9C.c)
 *     sub_1405AB9B8 @ 0x1405AB9B8 (sub_1405AB9B8.c)
 *     sub_1405AC950 @ 0x1405AC950 (sub_1405AC950.c)
 */

__int64 __fastcall MmSetGraphicsPtes(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  unsigned __int64 v10; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v12; // rbp
  int v13; // r15d
  __int64 v14; // rax
  char *v15; // rsi
  int v17; // edx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  ULONG_PTR v22; // rax
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-38h]
  unsigned int v25; // [rsp+60h] [rbp+8h] BYREF

  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
    || (v10 = BugCheckParameter2 + BugCheckParameter3, BugCheckParameter2 + BugCheckParameter3 <= BugCheckParameter2)
    || v10 >= 0xFFFF800000000000uLL )
  {
    KeBugCheckEx(0x1Au, 0xA000uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  }
  CurrentThread = KeGetCurrentThread();
  v25 = 0;
  v12 = v10 - 1;
  v13 = 0;
  v14 = sub_14030E7C0(BugCheckParameter2, 0, (int *)&v25);
  v15 = (char *)v14;
  if ( !v14 )
    return v25;
  v17 = *(_DWORD *)(v14 + 48);
  if ( (v17 & 0x2200000) != 0x2200000 )
    goto LABEL_34;
  if ( v12 <= (((*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) << 12) | 0xFFF) )
  {
    if ( (v17 & 0x70) == 0x30 )
    {
      v13 = 1;
      sub_1405AB9B8((__int64)CurrentThread);
      v19 = (__int64)sub_1405AAF9C(BugCheckParameter2);
      if ( !v19 )
      {
        v18 = -1073741585;
        goto LABEL_32;
      }
LABEL_14:
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v18 = -1073741580;
        goto LABEL_31;
      }
      if ( a5 )
      {
        v18 = -1073741581;
        goto LABEL_31;
      }
      v20 = v19 << 12;
      if ( a4 != v20 )
      {
        v18 = -1073741582;
        goto LABEL_31;
      }
      v21 = v20 - 1;
      if ( ((v20 - 1) & BugCheckParameter2) != 0 || (v21 & BugCheckParameter3) != 0 )
      {
        v18 = -1073741585;
        goto LABEL_31;
      }
      if ( a3 )
      {
        if ( (a6 & 1) != 0 )
        {
          v22 = 1LL;
          goto LABEL_27;
        }
        v22 = BugCheckParameter3 / v20;
        if ( BugCheckParameter3 / v20 )
        {
LABEL_27:
          v23 = 0LL;
          while ( (v21 & a3[v23]) == 0 )
          {
            if ( ++v23 >= v22 )
              goto LABEL_30;
          }
          v18 = -1073741583;
LABEL_31:
          if ( !v13 )
            goto LABEL_35;
LABEL_32:
          sub_1405AC950((__int64)CurrentThread);
          goto LABEL_35;
        }
      }
LABEL_30:
      v18 = sub_14058C874(BugCheckParameter2, BugCheckParameter3, a3, a4, v24, a6);
      goto LABEL_31;
    }
    if ( (v17 & 0xA00000) == 0xA00000 )
    {
      v19 = sub_14030EBF4(v14);
      goto LABEL_14;
    }
LABEL_34:
    v18 = -1073741585;
    goto LABEL_35;
  }
  v18 = -1073741584;
LABEL_35:
  sub_14032E700(v15);
  return v18;
}
