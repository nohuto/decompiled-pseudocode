/*
 * XREFs of sub_14066D4BC @ 0x14066D4BC
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     sub_14084565C @ 0x14084565C (sub_14084565C.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14028866C @ 0x14028866C (sub_14028866C.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1406FD4A0 @ 0x1406FD4A0 (sub_1406FD4A0.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 */

__int64 __fastcall sub_14066D4BC(__int64 *a1, int a2, __int64 a3, char a4, __int64 a5, char a6)
{
  int v6; // r11d
  int v10; // edi
  __int64 v11; // rcx
  int v12; // ebx
  int v14; // r12d
  __int64 result; // rax
  unsigned __int64 v16; // rdi
  struct _FILE_OBJECT *v17; // rbx
  PVOID Object; // [rsp+70h] [rbp-38h] BYREF
  __int64 v19; // [rsp+78h] [rbp-30h] BYREF

  v19 = 0LL;
  v6 = a6 & 1;
  Object = 0LL;
  v10 = v6 | 8;
  v11 = *((_QWORD *)KeGetCurrentThread() + 23);
  v12 = v6 != 0 ? 0x1000000 : 37748736;
  if ( (a6 & 4) == 0 )
    v10 = a6 & 1;
  v14 = sub_140287F30(v11);
  for ( result = sub_1406FD4A0((unsigned int)&Object, a2, 0, 16, v12, v10, a3, a4, a5, 0LL, 0, v14, 0LL);
        (int)result < 0;
        result = sub_1406FD4A0((unsigned int)&Object, a2, 0, 16, v12, v10, a3, a4, a5, 0LL, 0, v14, 0LL) )
  {
    if ( (_DWORD)result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_14003BE60);
  }
  v16 = sub_140287970((__int64)Object);
  v17 = (struct _FILE_OBJECT *)sub_140281750(v16);
  sub_14028866C(v17);
  sub_140280D08(v16, (unsigned __int64)v17);
  result = sub_140729C30(Object, 0LL, 0, 0LL, (__int64)&v19);
  if ( (int)result >= 0 )
    *a1 = v19;
  return result;
}
