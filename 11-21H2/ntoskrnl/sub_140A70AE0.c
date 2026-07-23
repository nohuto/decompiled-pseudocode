/*
 * XREFs of sub_140A70AE0 @ 0x140A70AE0
 * Callers:
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 *     sub_140A70A20 @ 0x140A70A20 (sub_140A70A20.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_140A6F124 @ 0x140A6F124 (sub_140A6F124.c)
 */

__int64 __fastcall sub_140A70AE0(ULONG a1, unsigned __int64 a2, char *a3, unsigned int a4, _DWORD *a5)
{
  _DWORD *v5; // rsi
  __int64 v8; // rdi
  __int64 v10; // rax
  int v11; // ebx
  int v12; // ebx
  __int64 *v13; // rdx
  unsigned int v14; // r8d
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF

  v5 = a5;
  v16 = 0LL;
  v8 = a1;
  *a5 = 0;
  if ( a1 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
    return 3221225473LL;
  v10 = qword_140D088C0[v8];
  if ( !v10 )
    return 3221225473LL;
  a5 = (_DWORD *)qword_140D088C0[v8];
  if ( a2 > 3 )
    return 3221225473LL;
  if ( !(_DWORD)a2 )
  {
    v13 = &v16;
    v16 = v10 - 384;
    goto LABEL_12;
  }
  v11 = a2 - 1;
  if ( !v11 )
  {
    v13 = (__int64 *)&a5;
LABEL_12:
    v14 = 8;
    goto LABEL_8;
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      v13 = (__int64 *)(v10 + 8);
      goto LABEL_12;
    }
    return 3221225473LL;
  }
  v13 = (__int64 *)(v10 + 256);
  v14 = 240;
LABEL_8:
  if ( v14 > a4 )
    v14 = a4;
  return sub_140A6F124(a3, (__int64)v13, v14, 0, 5, v5);
}
