/*
 * XREFs of CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___ @ 0x1803BE1B8
 * Callers:
 *     ?NotifyApplicationWindows@CImmersiveApp@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION@@W4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_DELIVERY_TYPE@@@Z @ 0x1803C3020 (-NotifyApplicationWindows@CImmersiveApp@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION.c)
 * Callees:
 *     _lambda_0758695e4094b81417177289bdc77534_::operator() @ 0x1803BF4C4 (_lambda_0758695e4094b81417177289bdc77534_--operator().c)
 */

char __fastcall CImmersiveApp::CImmersiveWindowCollection::ForEach__lambda_0758695e4094b81417177289bdc77534___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  char result; // al

  v2 = *(_QWORD *)(a1 + 176);
  v3 = 0LL;
  for ( result = 1;
        v3 < v2;
        result = lambda_0758695e4094b81417177289bdc77534_::operator()(a2, *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8 * v3++)) )
  {
    if ( !result )
      break;
  }
  return result;
}
