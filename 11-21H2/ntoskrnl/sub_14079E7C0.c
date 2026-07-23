/*
 * XREFs of sub_14079E7C0 @ 0x14079E7C0
 * Callers:
 *     sub_14058CC80 @ 0x14058CC80 (sub_14058CC80.c)
 *     sub_14079E760 @ 0x14079E760 (sub_14079E760.c)
 *     sub_14079E790 @ 0x14079E790 (sub_14079E790.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402EDD98 @ 0x1402EDD98 (sub_1402EDD98.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_14079EC58 @ 0x14079EC58 (sub_14079EC58.c)
 *     sub_1407BB560 @ 0x1407BB560 (sub_1407BB560.c)
 */

__int64 __fastcall sub_14079E7C0(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        int a6,
        int a7)
{
  char v9; // r13
  struct _KTHREAD *CurrentThread; // r15
  char v11; // al
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  int v14; // ebx
  PVOID v15; // r15
  PVOID v16; // rsi
  __int64 v17; // r14
  int v18; // eax
  __int64 Tag; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object[2]; // [rsp+50h] [rbp-38h] BYREF
  char v24; // [rsp+C0h] [rbp+38h]

  Object[0] = 0LL;
  v9 = a7;
  if ( (a7 & 0xFFFFFFFE) != 0 || (a7 & 1) != 0 && a6 != 16 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v11 = *((_BYTE *)CurrentThread + 562);
  v24 = v11;
  if ( v11 )
  {
    if ( a2 + a4 < a2 || a2 + a4 > 0x7FFFFFFF0000LL || a3 + a4 < a3 || a3 + a4 > 0x7FFFFFFF0000LL )
      return 3221225477LL;
    v12 = (_QWORD *)a5;
    if ( a5 )
    {
      v13 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = *(_QWORD *)v13;
    }
  }
  else
  {
    v12 = (_QWORD *)a5;
  }
  v21 = 0LL;
  v14 = 0;
  if ( a4 )
  {
    v14 = sub_140732D40(BugCheckParameter1, a6, (__int64)PsProcessType, v11, 0x6D566D4Du, Object, 0LL, 0LL);
    if ( v14 >= 0 )
    {
      v15 = (PVOID)*((_QWORD *)CurrentThread + 23);
      v16 = Object[0];
      if ( (*((_BYTE *)Object[0] + 992) & 1) == 0 || v15 == Object[0] || *((_QWORD *)Object[0] + 175) )
      {
        Tag = a4;
        v17 = a2;
        if ( a6 == 16 )
          v18 = sub_1407BB560((ULONG_PTR)Object[0], Tag, v24, (__int64)&v21, v9);
        else
          v18 = sub_1407BB560((ULONG_PTR)v15, Tag, v24, (__int64)&v21, 0);
        v14 = v18;
      }
      else
      {
        v14 = -1073741819;
        v17 = a2;
      }
      if ( (unsigned int)sub_1402EDD98((__int64)v15, (__int64)v16, a6) )
        sub_14079EC58(v14, (_DWORD)v15, (_DWORD)v16, a6, v17, v21);
      ObfDereferenceObjectWithTag(v16, 0x6D566D4Du);
    }
  }
  if ( v12 )
    *v12 = v21;
  return (unsigned int)v14;
}
