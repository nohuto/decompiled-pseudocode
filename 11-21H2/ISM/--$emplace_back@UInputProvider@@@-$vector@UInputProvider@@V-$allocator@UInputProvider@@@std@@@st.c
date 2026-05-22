/*
 * XREFs of ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAAEAUInputProvider@@$$QEAU2@@Z @ 0x1800B4A4C
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003545C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<InputProvider>::emplace_back<InputProvider>(_QWORD *a1, _OWORD *a2)
{
  _OWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  char *result; // rax

  v4 = (_OWORD *)a1[1];
  if ( v4 == (_OWORD *)a1[2] )
    return std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(a1, (unsigned __int64)v4, a2);
  v5 = a2 + 1;
  *v4 = *a2;
  v6 = v4 + 1;
  *v6 = 0LL;
  if ( v6 != (_QWORD *)(a2 + 1) )
  {
    *v6 = *v5;
    *v5 = 0LL;
  }
  result = (char *)a1[1];
  a1[1] = result + 24;
  return result;
}
