/*
 * XREFs of sub_140814DC0 @ 0x140814DC0
 * Callers:
 *     sub_140814C74 @ 0x140814C74 (sub_140814C74.c)
 *     sub_14099B8FC @ 0x14099B8FC (sub_14099B8FC.c)
 *     sub_1409F36F4 @ 0x1409F36F4 (sub_1409F36F4.c)
 *     sub_140A0350C @ 0x140A0350C (sub_140A0350C.c)
 *     sub_140A03DA4 @ 0x140A03DA4 (sub_140A03DA4.c)
 * Callees:
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_1402A1770 @ 0x1402A1770 (sub_1402A1770.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402D8E00 @ 0x1402D8E00 (sub_1402D8E00.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     sub_140359DE0 @ 0x140359DE0 (sub_140359DE0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406F5AF0 @ 0x1406F5AF0 (sub_1406F5AF0.c)
 *     sub_1406F5B50 @ 0x1406F5B50 (sub_1406F5B50.c)
 */

__int64 __fastcall sub_140814DC0(__int64 a1, __int64 a2)
{
  int v2; // r15d
  __int64 v4; // r8
  __int64 v5; // rbp
  struct _KTHREAD *v6; // rsi
  PVOID *v7; // rdi
  unsigned __int64 v8; // r14
  void *v9; // rbx
  void *i; // rcx
  ULONG_PTR v12; // rax
  _OWORD v13[3]; // [rsp+20h] [rbp-78h] BYREF

  v2 = 0;
  memset(v13, 0, sizeof(v13));
  v4 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( (*(_DWORD *)(v4 + 2172) & 0x1000) != 0 )
    v5 = 0LL;
  else
    v5 = *(_QWORD *)(v4 + 1368);
  v6 = sub_1406F5B50();
  --*((_WORD *)v6 + 242);
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v7 = (PVOID *)PsLoadedModuleList;
  do
  {
    v8 = (unsigned __int64)v7[6];
    v9 = 0LL;
    if ( sub_140359DE0(v8) && (!v5 || !sub_1402DBF3C(v8)) )
    {
      for ( i = 0LL; ; i = v9 )
      {
        v12 = sub_1402A1770(i);
        v9 = (void *)v12;
        if ( !v12 )
          break;
        if ( (int)sub_1402312E0(v12) >= 0 )
        {
          if ( sub_1402DBF3C(v8) )
            goto LABEL_5;
          sub_140231240((__int64)v9, (__int64)v13);
        }
      }
      goto LABEL_8;
    }
LABEL_5:
    v2 = sub_14042A5E0(v7, a2);
    if ( v9 )
    {
      sub_140231240((__int64)v9, (__int64)v13);
      ObfDereferenceObject(v9);
    }
    if ( v2 < 0 )
      break;
LABEL_8:
    v7 = (PVOID *)*v7;
  }
  while ( v7 != &PsLoadedModuleList );
  sub_1402D8E00((__int64)v6);
  sub_1406F5AF0((__int64)v6);
  return (unsigned int)v2;
}
