/*
 * XREFs of ?Create@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00D1CE4
 * Callers:
 *     ?Allocate@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1C00D1A34 (-Allocate@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?Initialize@?$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAA_NXZ @ 0x1C00D38C0 (-Initialize@-$CTypeIsolation@$0OAAAA@$0OAA@@NSInstrumentation@@IEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C00D1DBC (-Destroy@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00D205C (-Initialize@-$CSectionEntry@$0OAAAA@$0OAA@@NSInstrumentation@@AEAA_NXZ.c)
 */

void *NSInstrumentation::CSectionEntry<917504,3584>::Create()
{
  _QWORD *Pool2; // rax
  void *v1; // rbx

  Pool2 = (_QWORD *)ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v1 = Pool2;
  if ( !Pool2 )
    return 0LL;
  Pool2[2] = 0LL;
  Pool2[3] = 0LL;
  Pool2[4] = 0LL;
  if ( !(unsigned __int8)NSInstrumentation::CSectionEntry<917504,3584>::Initialize(Pool2) )
  {
    NSInstrumentation::CSectionEntry<917504,3584>::Destroy(v1);
    return 0LL;
  }
  return v1;
}
