/*
 * XREFs of ?reset@?$unique_ptr@MU?$function_deleter@P6AXPEAX@Z$1?_freea@@YAX0@Z@wil@@@wistd@@QEAAXPEAM@Z @ 0x18004B768
 * Callers:
 *     _lambda_b08f66900c5e6cc9009fb22e38011b96_::operator() @ 0x180070D74 (_lambda_b08f66900c5e6cc9009fb22e38011b96_--operator().c)
 * Callees:
 *     _freea @ 0x18004B5A0 (_freea.c)
 */

void __fastcall wistd::unique_ptr<float,wil::function_deleter<void (*)(void *),&void _freea(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    freea(v2);
}
