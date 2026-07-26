/*
 * XREFs of ??_EMINIPORT_HOOK_DRIVER@@QEAAPEAXI@Z @ 0x1C013DB4C
 * Callers:
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C0161848 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     ??1MINIPORT_HOOK_DRIVER@@QEAA@XZ @ 0x1C013DB40 (--1MINIPORT_HOOK_DRIVER@@QEAA@XZ.c)
 */

char *__fastcall MINIPORT_HOOK_DRIVER::`vector deleting destructor'(MINIPORT_HOOK_DRIVER *this)
{
  char *v1; // rdi
  __int64 v2; // rsi
  MINIPORT_HOOK_DRIVER *i; // rbx

  v1 = (char *)this - 8;
  v2 = *((_QWORD *)this - 1);
  for ( i = (MINIPORT_HOOK_DRIVER *)((char *)this + 128 * v2); v2; --v2 )
  {
    i = (MINIPORT_HOOK_DRIVER *)((char *)i - 128);
    MINIPORT_HOOK_DRIVER::~MINIPORT_HOOK_DRIVER(i);
  }
  if ( v1 )
    ExFreePoolWithTag(v1, 0x6448704Du);
  return v1;
}
