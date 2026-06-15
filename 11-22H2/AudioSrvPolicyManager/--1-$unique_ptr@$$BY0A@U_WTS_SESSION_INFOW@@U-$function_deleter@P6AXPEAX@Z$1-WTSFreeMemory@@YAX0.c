/*
 * XREFs of ??1?$unique_ptr@$$BY0A@U_WTS_SESSION_INFOW@@U?$function_deleter@P6AXPEAX@Z$1?WTSFreeMemory@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x18003405C
 * Callers:
 *     __lambda_7af2eb194479c71b10cc30af6f218930_::operator()_::_1_::dtor$0 @ 0x18004AD4E (__lambda_7af2eb194479c71b10cc30af6f218930_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>::~unique_ptr<_WTS_SESSION_INFOW [0],wil::function_deleter<void (*)(void *),&void WTSFreeMemory(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    WTSFreeMemory(v1);
}
