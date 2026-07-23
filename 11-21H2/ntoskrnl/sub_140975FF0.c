/*
 * XREFs of sub_140975FF0 @ 0x140975FF0
 * Callers:
 *     sub_140970E00 @ 0x140970E00 (sub_140970E00.c)
 *     sub_140972700 @ 0x140972700 (sub_140972700.c)
 * Callees:
 *     sub_14056A188 @ 0x14056A188 (sub_14056A188.c)
 *     sub_1406EB3D4 @ 0x1406EB3D4 (sub_1406EB3D4.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 *     MmUnloadSystemImage @ 0x140762490 (MmUnloadSystemImage.c)
 *     sub_140971708 @ 0x140971708 (sub_140971708.c)
 *     sub_140973F50 @ 0x140973F50 (sub_140973F50.c)
 *     sub_140978260 @ 0x140978260 (sub_140978260.c)
 *     sub_1409C0550 @ 0x1409C0550 (sub_1409C0550.c)
 *     sub_1409C0580 @ 0x1409C0580 (sub_1409C0580.c)
 */

__int64 __fastcall sub_140975FF0(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // r12
  void *v7; // rdi
  int v8; // ebx
  int v9; // eax
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(void **)(a2 + 88);
  v16 = 0LL;
  BugCheckParameter2 = 0LL;
  v7 = (void *)sub_140978260(v3, a1);
  if ( v7 )
  {
    v9 = sub_14056A188(**(_QWORD **)a3);
    v8 = sub_14075FC44(a1 + 72, 0LL, 0LL, 0LL, v9 != 0 ? 1879048193 : 1610612737, &BugCheckParameter2, &v16);
    if ( v8 < 0 )
      goto LABEL_11;
    v10 = 1;
    v11 = sub_1409C0580(*(PVOID *)(a1 + 48));
    *(_QWORD *)(a3 + 24) = v11;
    v12 = sub_1409C0550(v11);
    *(_QWORD *)(a3 + 32) = v13 + *(unsigned int *)(v12 + 24);
    v8 = sub_140971708(a3);
    if ( v8 >= 0 )
    {
      if ( !*(_QWORD *)(a3 + 48) || (v8 = sub_140973F50(a1, a3 + 48), v8 >= 0) )
      {
        v10 = 0;
        *(_QWORD *)(a2 + 88) = v7;
        v8 = 0;
        v7 = v3;
      }
    }
    sub_140761234(a1, *(_QWORD *)(a1 + 112), 0LL, 0LL, 0LL, 0);
    if ( v10 )
      MmUnloadSystemImage(BugCheckParameter2);
    if ( v7 )
LABEL_11:
      sub_1406EB3D4(v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
