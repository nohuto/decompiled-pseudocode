/*
 * XREFs of _lambda_ee96b6502effcc67d9cd908cd78240cc_::_lambda_invoker_cdecl_ @ 0x1C0122EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z @ 0x1C009E5D8 (-NotifyHotKeyRegistrationChanged@@YAXQEAUtagHOTKEY@@QEAUtagCHILDHOTKEY@@_N@Z.c)
 */

void lambda_ee96b6502effcc67d9cd908cd78240cc_::_lambda_invoker_cdecl_()
{
  unsigned int v0; // esi
  struct tagHOTKEY * near **v1; // rdi
  struct tagHOTKEY * near *i; // rbx
  struct tagHOTKEY * near *j; // r14

  v0 = 0;
  v1 = &gphkHashTable;
  do
  {
    for ( i = *v1; i; i = (struct tagHOTKEY * near *)i[5] )
    {
      NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)i, 0LL, 1u);
      for ( j = (struct tagHOTKEY * near *)i[6]; j != i + 6; j = (struct tagHOTKEY * near *)*j )
        NotifyHotKeyRegistrationChanged((struct tagHOTKEY *const)i, (struct tagCHILDHOTKEY *const)(j - 3), 1u);
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 0x80 );
}
