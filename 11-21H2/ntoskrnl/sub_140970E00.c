/*
 * XREFs of sub_140970E00 @ 0x140970E00
 * Callers:
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 * Callees:
 *     sub_14021803C @ 0x14021803C (sub_14021803C.c)
 *     sub_140238D0C @ 0x140238D0C (sub_140238D0C.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     sub_1405994CC @ 0x1405994CC (sub_1405994CC.c)
 *     sub_1405994E4 @ 0x1405994E4 (sub_1405994E4.c)
 *     sub_1406EB3D4 @ 0x1406EB3D4 (sub_1406EB3D4.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140973F50 @ 0x140973F50 (sub_140973F50.c)
 *     sub_140974FBC @ 0x140974FBC (sub_140974FBC.c)
 *     sub_140975FF0 @ 0x140975FF0 (sub_140975FF0.c)
 *     sub_1409782F8 @ 0x1409782F8 (sub_1409782F8.c)
 *     sub_14097833C @ 0x14097833C (sub_14097833C.c)
 */

__int64 __fastcall sub_140970E00(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v8; // r12
  int v9; // ebx
  __int64 *v10; // rdi
  __int64 *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r14
  void *v14; // rbp
  __int64 v15; // rax

  v4 = a1;
  v8 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
  sub_14021803C((__int64)&qword_140C533D8);
  v9 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    v11 = sub_1405994E4(v10);
    v10 = v11;
    if ( !v11 )
      break;
    if ( v11 != (__int64 *)v8 )
    {
      sub_140238D0C((__int64)v11, qword_140C533D8);
      v12 = sub_1402DBF3C(*(_QWORD *)(v4 + 48));
      v13 = v12;
      if ( v12 )
      {
        if ( a3 )
        {
          v14 = (void *)v12[11];
          if ( a3 == 3 )
          {
            v9 = sub_140973F50(a2, a4);
          }
          else if ( (unsigned int)sub_1409782F8(v12[11], a2) )
          {
            v15 = sub_14097833C(v14, a2);
            if ( (void *)v15 != v14 )
            {
              v13[11] = v15;
              sub_1406EB3D4(v14);
            }
            if ( *(_QWORD *)(a4 + 48) )
            {
              *(_DWORD *)(a4 + 56) = 2;
              sub_140973F50(a2, a4 + 48);
            }
            sub_1406F4FB8(a2, -1);
          }
          v4 = a1;
        }
        else
        {
          v9 = sub_140975FF0(a2, v12, a4);
          sub_140974FBC(*(_DWORD *)(v4 + 120), *(_DWORD *)(v4 + 156), a2 + 72, v9, 3);
        }
      }
      sub_14021803C((__int64)&qword_140C533D8);
    }
    if ( v9 < 0 )
    {
      sub_1405994CC(v10);
      break;
    }
  }
  sub_140238D0C(v8, qword_140C533D8);
  return (unsigned int)v9;
}
