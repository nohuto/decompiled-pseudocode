/*
 * XREFs of sub_140700280 @ 0x140700280
 * Callers:
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     sub_1407AC250 @ 0x1407AC250 (sub_1407AC250.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1406792F4 @ 0x1406792F4 (sub_1406792F4.c)
 *     sub_1406855F4 @ 0x1406855F4 (sub_1406855F4.c)
 *     sub_1406FFE90 @ 0x1406FFE90 (sub_1406FFE90.c)
 *     sub_1409E2D4C @ 0x1409E2D4C (sub_1409E2D4C.c)
 */

void __fastcall sub_140700280(__int64 Object, char *a2, int a3, signed __int64 a4, char a5, __int64 a6, __int64 a7)
{
  struct _KTHREAD *CurrentThread; // r13
  int v8; // esi
  char *v9; // rbx
  __int64 v10; // r12
  unsigned int v11; // r15d
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rcx
  bool v15; // zf
  int v16; // eax
  bool v17; // si
  char v18; // cl
  char v19; // al
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h] BYREF
  struct _KTHREAD *v22; // [rsp+40h] [rbp-48h]
  int v23; // [rsp+90h] [rbp+8h]

  v23 = Object;
  CurrentThread = KeGetCurrentThread();
  v8 = Object;
  v9 = (char *)Object;
  v10 = a3;
  v22 = CurrentThread;
  v20 = 0LL;
  v11 = 1 << a3;
  if ( (a5 & 1) != 0 )
    sub_1406855F4(Object, (__int64)CurrentThread, &v20);
  do
  {
    if ( (a5 & 1) != 0 )
      ExAcquireResourceSharedLite((PERESOURCE)(v9 + 56), 1u);
    v12 = 1136LL;
    if ( (a5 & 4) == 0 )
      v12 = 8 * v10 + 1080;
    v13 = a4 + _InterlockedExchangeAdd64((volatile signed __int64 *)&v9[v12], a4);
    if ( (a5 & 4) != 0 )
    {
      if ( *((_DWORD *)v9 + 262) )
      {
        if ( (a5 & 2) != 0 && (_BYTE)KdDebuggerEnabled )
          __int2c();
        if ( (xmmword_140D06910 & 0x200) != 0 )
          sub_1409E2D4C(v8, v10, 0, a6, a7);
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    }
    else
    {
      v14 = *((_QWORD *)v9 + 143);
      v15 = (*((_DWORD *)v9 + 378) & 0x800) == 0;
      v16 = *((_DWORD *)v9 + 378) & 0x800;
      v21 = v14;
      v17 = !v15;
      if ( (v16 & 0x800) != 0 && !v13 && (HIDWORD(v14) & v11) == 0 )
      {
        v17 = 0;
        _InterlockedOr((volatile signed __int32 *)v9 + 288, v11);
      }
      if ( (a5 & 1) != 0 )
        ExReleaseResourceLite((PERESOURCE)(v9 + 56));
      if ( v17 )
      {
        v18 = 6;
        if ( a4 <= 0 )
          v18 = 0;
        v19 = v18 | 1;
        if ( (a5 & 1) == 0 )
          v19 = v18;
        sub_1406792F4(v9, v10, &v21, v13, v19);
      }
      v8 = v23;
    }
    v9 = (char *)*((_QWORD *)v9 + 158);
  }
  while ( v9 != a2 && (*((_DWORD *)v9 + 378) & 0x1000) != 0 );
  if ( (a5 & 1) != 0 )
    sub_1406FFE90(v20, (__int64)v22);
}
