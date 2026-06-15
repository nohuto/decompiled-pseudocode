/*
 * XREFs of ?InitLoggingInfo@CAudioPump@@UEAAJPEBU_tlgProvider_t@@U_GUID@@PEBG@Z @ 0x140024BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140006E98 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1400144C8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioPump::InitLoggingInfo(
        CAudioPump *this,
        const struct _tlgProvider_t *a2,
        struct _GUID *a3,
        const unsigned __int16 *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  int v12; // edi
  __int64 v14; // rdx
  __int64 v15; // [rsp+20h] [rbp-48h]
  void **v16; // [rsp+30h] [rbp-38h]
  unsigned __int16 *v17; // [rsp+38h] [rbp-30h] BYREF
  char v18; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  if ( *((_BYTE *)this + 64) )
  {
    *((_QWORD *)this + 592) = a2;
    *((struct _GUID *)this + 292) = *a3;
    if ( !a4 )
      goto LABEL_8;
    v17 = 0LL;
    v16 = (void **)((char *)this + 4688);
    v11 = -1LL;
    v18 = 1;
    do
      ++v11;
    while ( a4[v11] );
    v12 = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, a4, v11, v15, &v17);
    if ( v18 )
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v16,
        v17);
    if ( v12 >= 0 )
    {
LABEL_8:
      if ( v4 )
        LeaveCriticalSection(v4);
      return 0LL;
    }
    v14 = 313LL;
  }
  else
  {
    v12 = -2005139437;
    v14 = 307LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
    (const char *)(unsigned int)v12,
    v15);
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v12;
}
