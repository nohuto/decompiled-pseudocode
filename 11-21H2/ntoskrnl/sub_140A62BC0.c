/*
 * XREFs of sub_140A62BC0 @ 0x140A62BC0
 * Callers:
 *     sub_140A62700 @ 0x140A62700 (sub_140A62700.c)
 * Callees:
 *     sub_140252460 @ 0x140252460 (sub_140252460.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14051DB48 @ 0x14051DB48 (sub_14051DB48.c)
 *     sub_140A51670 @ 0x140A51670 (sub_140A51670.c)
 *     sub_140A62AD4 @ 0x140A62AD4 (sub_140A62AD4.c)
 *     sub_140A62D6C @ 0x140A62D6C (sub_140A62D6C.c)
 *     sub_140A62EE4 @ 0x140A62EE4 (sub_140A62EE4.c)
 */

__int64 __fastcall sub_140A62BC0(_DWORD *BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  int v3; // ebp
  unsigned int v4; // r9d
  _DWORD *v7; // r8
  unsigned int v8; // edx
  ULONG_PTR v10; // r11
  unsigned int v11; // r15d
  ULONG_PTR v12; // r12
  unsigned int *v13; // rdi
  ULONG_PTR *v14; // rsi
  ULONG_PTR *v15; // rax
  _QWORD *v16; // r13
  int v17; // ecx
  __int128 v18; // [rsp+30h] [rbp-68h] BYREF
  int v19; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+48h] [rbp-50h] BYREF
  int v21; // [rsp+58h] [rbp-40h]
  _QWORD *v23; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  v4 = 0;
  v19 = 0;
  v21 = 0;
  v18 = 0LL;
  v20 = 0LL;
  if ( a3 )
  {
    v7 = BugCheckParameter3;
    while ( 1 )
    {
      v8 = 0;
      if ( !(_DWORD)dword_140C54A90 )
        return 3221226021LL;
      while ( *(_DWORD *)(((unsigned __int64)v8 << 6) + qword_140C4E210) != *v7 )
      {
        if ( ++v8 >= (unsigned int)dword_140C54A90 )
          return 3221226021LL;
      }
      ++v4;
      ++v7;
      if ( v4 >= a3 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    if ( sub_140252460() )
    {
      sub_14051DB48();
      v10 = a2;
    }
    v11 = 0;
    if ( a3 )
    {
      v12 = v10 - (_QWORD)BugCheckParameter3;
      v13 = BugCheckParameter3;
      do
      {
        v3 = sub_140A62EE4(*v13, *(unsigned int *)((char *)v13 + v12), &v20, &v18);
        if ( v3 < 0 )
          goto LABEL_20;
        v14 = (ULONG_PTR *)qword_140C4DE70;
LABEL_17:
        while ( v14 != &qword_140C4DE70 )
        {
          v15 = v14;
          v14 = (ULONG_PTR *)*v14;
          v23 = v15 + 31;
          v16 = (_QWORD *)v15[31];
          if ( (_QWORD *)*v23 != v23 )
          {
            while ( 1 )
            {
              v17 = (int)v16;
              v16 = (_QWORD *)*v16;
              v3 = sub_140A62D6C(v17, *v13, *(unsigned int *)((char *)v13 + v12), (unsigned int)&v20, (__int64)&v18);
              if ( v3 < 0 )
                break;
              if ( v16 == v23 )
                goto LABEL_17;
            }
LABEL_20:
            KeBugCheckEx(0x5Cu, 0x4000uLL, qword_140C4E210, (ULONG_PTR)BugCheckParameter3, a2);
          }
        }
        ++v11;
        ++v13;
      }
      while ( v11 < a3 );
    }
    sub_140A62AD4();
    sub_140A51670();
    return (unsigned int)v3;
  }
}
