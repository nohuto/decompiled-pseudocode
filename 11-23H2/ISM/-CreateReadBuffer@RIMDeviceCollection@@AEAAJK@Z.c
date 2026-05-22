/*
 * XREFs of ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x1800D4F70
 * Callers:
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x1800D52A0 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800D5798 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x180056D48 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x180057628 (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::CreateReadBuffer(RIMDeviceCollection *this, unsigned int a2)
{
  size_t v3; // rdi
  void *v4; // rcx
  __int64 result; // rax

  v3 = a2;
  v4 = (void *)*((_QWORD *)this + 335);
  if ( v4 )
  {
    operator delete[](v4);
    *((_QWORD *)this + 335) = 0LL;
  }
  *((_DWORD *)this + 672) = 0;
  *((_QWORD *)this + 335) = operator new[](v3);
  result = 0LL;
  *((_DWORD *)this + 672) = v3;
  return result;
}
