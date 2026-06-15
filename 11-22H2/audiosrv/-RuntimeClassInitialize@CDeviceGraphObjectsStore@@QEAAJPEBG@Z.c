/*
 * XREFs of ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z @ 0x18002D328
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18002E680 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@M.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002D260 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002D3D4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::RuntimeClassInitialize(
        CDeviceGraphObjectsStore *this,
        const unsigned __int16 *a2)
{
  void **v2; // rsi
  void *v3; // rdi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  int v7; // ebx
  DWORD LastError; // ebx
  int v10; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (void **)((char *)this + 16);
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v3);
    SetLastError(LastError);
  }
  *v2 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = v5 + 1;
  if ( v5 + 1 >= v5 && (*v2 = 0LL, is_mul_ok(v6, 2uLL)) )
  {
    v7 = CTCoAllocPolicy::Alloc(this, (v6 * (unsigned __int128)2uLL) >> 64, 2 * v6, v2);
    if ( v7 >= 0 )
    {
      StringCchCopyNExW((char *)*v2, v5 + 1, a2, v5);
      return 0LL;
    }
  }
  else
  {
    v7 = -2147024362;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
    (const char *)(unsigned int)v7,
    v10);
  return (unsigned int)v7;
}
