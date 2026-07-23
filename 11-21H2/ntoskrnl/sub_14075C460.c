/*
 * XREFs of sub_14075C460 @ 0x14075C460
 * Callers:
 *     sub_14075C7BC @ 0x14075C7BC (sub_14075C7BC.c)
 * Callees:
 *     sub_1402D84BC @ 0x1402D84BC (sub_1402D84BC.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14075C380 @ 0x14075C380 (sub_14075C380.c)
 *     sub_14075C424 @ 0x14075C424 (sub_14075C424.c)
 *     sub_14075C588 @ 0x14075C588 (sub_14075C588.c)
 *     sub_14075C68C @ 0x14075C68C (sub_14075C68C.c)
 */

__int64 __fastcall sub_14075C460(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, unsigned int *a5)
{
  _QWORD *v7; // rsi
  unsigned int v8; // edi
  int v9; // eax
  __int64 *v10; // r13
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 v13; // r15
  __int64 v14; // rcx
  void *v16; // rax
  unsigned int v17; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+44h] [rbp-1Ch] BYREF
  void *Src; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v20; // [rsp+50h] [rbp-10h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-8h] BYREF
  char *v23; // [rsp+A0h] [rbp+40h]

  Src = 0LL;
  v20 = 0LL;
  v7 = 0LL;
  v18 = 0;
  v8 = 0;
  v17 = 0;
  v21 = 0LL;
  if ( !a1 || !a4 )
    return 3221225485LL;
  *a4 = 0LL;
  *a5 = 0;
  v9 = sub_14075C68C(&v21);
  v10 = v21;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = sub_14075C380(*v21, (__int64)&qword_140C2A6E0, a1, a2, a3, &Src, &v18);
    v13 = v18;
    v11 = v12;
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741275 )
      goto LABEL_9;
    v14 = v10[7];
    if ( v14 )
    {
      v11 = sub_14075C380(v14, (__int64)&qword_140C2A6E0, a1, a2, a3, &v20, &v17);
      if ( (int)(v11 + 0x80000000) >= 0 && v11 != -1073741275 )
      {
        v7 = v20;
        v8 = v17;
        goto LABEL_9;
      }
      v7 = v20;
      v8 = v17;
    }
    if ( (_DWORD)v13 )
    {
      if ( v8 )
      {
        v23 = (char *)sub_1402D84BC(80LL * (v8 + (unsigned int)v13));
        if ( !v23 )
        {
          v11 = -1073741801;
          goto LABEL_9;
        }
        memmove(v23, Src, 80 * v13);
        memmove(&v23[80 * v13], v7, v8);
        *a4 = v23;
        *a5 = v8 + v13;
      }
      else
      {
        v16 = Src;
        Src = 0LL;
        *a4 = v16;
        *a5 = v13;
      }
    }
    else
    {
      if ( !v8 )
      {
        v11 = -1073741275;
LABEL_9:
        if ( Src )
          sub_14075C424(Src, v13);
        if ( v7 )
          sub_14075C424(v7, v8);
        goto LABEL_13;
      }
      *a4 = v7;
      v7 = 0LL;
      *a5 = v8;
    }
    v11 = 0;
    goto LABEL_9;
  }
LABEL_13:
  if ( v10 )
    sub_14075C588(v10);
  return v11;
}
