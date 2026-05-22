/*
 * XREFs of ?erase@?$vector@U?$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@V?$allocator@U?$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@PEAVProxyObject@Composition@UI@Windows@@I@std@@@std@@@std@@@2@0@Z @ 0x18012A40C
 * Callers:
 *     ?RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProxyObject@234@I_N@Z @ 0x180072020 (-RemoveDeferredPropertyChangeNotification@CompositorCommon@Composition@UI@Windows@@QEAAXPEAVProx.c)
 * Callees:
 *     <none>
 */

char **__fastcall std::vector<std::pair<Windows::UI::Composition::ProxyObject *,unsigned int>>::erase(
        __int64 a1,
        char **a2,
        char *a3,
        char *a4)
{
  char *v5; // rbx
  char *v6; // r10
  char *v7; // rdi
  signed __int64 v8; // rsi
  char *v9; // rcx
  char **result; // rax

  if ( a3 != a4 )
  {
    v5 = *(char **)(a1 + 8);
    v6 = a3;
    if ( a4 != v5 )
    {
      v7 = (char *)(a4 - a3);
      v8 = a3 - a4;
      do
      {
        v9 = &a4[v8];
        *(_QWORD *)v6 = *(_QWORD *)a4;
        a4 += 16;
        v6 += 16;
        *((_DWORD *)v9 + 2) = *(_DWORD *)&v7[(_QWORD)v9 + 8];
      }
      while ( a4 != v5 );
    }
    *(_QWORD *)(a1 + 8) = v6;
  }
  result = a2;
  *a2 = a3;
  return result;
}
