/*
 * XREFs of sub_14081059C @ 0x14081059C
 * Callers:
 *     sub_140766834 @ 0x140766834 (sub_140766834.c)
 * Callees:
 *     sub_14025B96C @ 0x14025B96C (sub_14025B96C.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_1403A0064 @ 0x1403A0064 (sub_1403A0064.c)
 *     sub_1403A01B0 @ 0x1403A01B0 (sub_1403A01B0.c)
 *     sub_1403A15FC @ 0x1403A15FC (sub_1403A15FC.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_1407669D4 @ 0x1407669D4 (sub_1407669D4.c)
 *     sub_140766A5C @ 0x140766A5C (sub_140766A5C.c)
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 *     sub_14076FBEC @ 0x14076FBEC (sub_14076FBEC.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_140810788 @ 0x140810788 (sub_140810788.c)
 *     sub_14085CA7C @ 0x14085CA7C (sub_14085CA7C.c)
 */

void __fastcall sub_14081059C(ULONG_PTR MaxDataSize, int a2, int a3)
{
  int v3; // esi
  struct _DEVICE_OBJECT *v4; // r12
  int v8; // r14d
  __int64 v9; // rbx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rcx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rbp
  void *v18; // rbx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(MaxDataSize + 300);
  v4 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v8 = 768;
  v19 = 0LL;
  if ( v3 == 784 || v3 == 785 )
  {
    v8 = v3;
    sub_14025B96C(MaxDataSize);
    v3 = *(_DWORD *)(MaxDataSize + 300);
  }
  *(_WORD *)(MaxDataSize + 466) = 0;
  if ( v3 == 787 && v8 == 784 )
  {
    sub_14076FBEC(MaxDataSize, 16);
    sub_1402DE844(MaxDataSize, 789);
    return;
  }
  v9 = *(_QWORD *)(MaxDataSize + 8);
  if ( v9 )
  {
    do
    {
      v16 = *(_DWORD *)(v9 + 396);
      v17 = *(_QWORD *)v9;
      if ( (v16 & 0x10) != 0 )
      {
        v16 &= ~0x10u;
        *(_DWORD *)(v9 + 396) = v16;
      }
      if ( *(_QWORD *)(v9 + 416) || *(_QWORD *)(v9 + 544) || (v16 & 0x40) != 0 )
        sub_140766A5C(v9, 0);
      sub_1402DE844(v9, 789);
      v9 = v17;
    }
    while ( v17 );
  }
  if ( v3 == 780 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    sub_1403A0064((ULONG_PTR)v4, 1, (ULONG_PTR *)&v19);
    sub_1403A01B0((__int64)v4);
    sub_14076FBEC(MaxDataSize, 0x1000000);
  }
  v10 = *(_DWORD *)(MaxDataSize + 300);
  if ( v10 < 769 || v10 > 772 && (v10 <= 778 || v10 == 780 || (unsigned int)(v10 - 787) > 3) )
  {
    v11 = sub_140766C3C(v4, 23);
    sub_140810788(MaxDataSize + 40);
    if ( v11 >= 0 )
      sub_140766A5C(MaxDataSize, 0);
    v12 = MaxDataSize;
    if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
    {
      v13 = 789;
LABEL_13:
      sub_1402DE844(v12, v13);
      goto LABEL_14;
    }
    sub_1402DE844(MaxDataSize, 787);
    v13 = 784;
    if ( v8 == 784 )
    {
      v12 = MaxDataSize;
      goto LABEL_13;
    }
  }
LABEL_14:
  if ( v3 == 780 )
  {
    v18 = (void *)*((_QWORD *)&v19 + 1);
    if ( *((_QWORD *)&v19 + 1) )
    {
      sub_1403A15FC(*((ULONG_PTR *)&v19 + 1));
      ObfDereferenceObject(v18);
    }
  }
  if ( a2 && (*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0 )
    sub_140765114(MaxDataSize, a2, a3);
  if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) == 0 )
  {
    sub_1407756F4(1);
    v14 = *(_QWORD *)(MaxDataSize + 32);
    if ( v14 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 312) + 80LL);
      if ( v15 )
        sub_14085CA7C(v15);
    }
    ExReleaseResourceLite(&stru_140C46AC0);
    sub_140775698(0);
    sub_14076BC20();
  }
  sub_1407669D4(MaxDataSize, a2, 0);
}
