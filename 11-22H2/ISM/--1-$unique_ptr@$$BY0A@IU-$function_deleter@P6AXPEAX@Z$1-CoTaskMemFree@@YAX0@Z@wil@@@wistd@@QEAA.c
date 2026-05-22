/*
 * XREFs of ??1?$unique_ptr@$$BY0A@IU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x18006220C
 * Callers:
 *     _LampArrayRawInputProvider::UpdateDeviceAmbientProcess_::_1_::dtor$2 @ 0x1800631DB (_LampArrayRawInputProvider--UpdateDeviceAmbientProcess_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned int [0],wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    CoTaskMemFree(v1);
}
