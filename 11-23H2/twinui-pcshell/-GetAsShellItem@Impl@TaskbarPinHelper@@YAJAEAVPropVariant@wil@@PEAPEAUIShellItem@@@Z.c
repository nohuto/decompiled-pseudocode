/*
 * XREFs of ?GetAsShellItem@Impl@TaskbarPinHelper@@YAJAEAVPropVariant@wil@@PEAPEAUIShellItem@@@Z @ 0x1806A156C
 * Callers:
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1806A2560 (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1806A1B2C (-GetObjectW@PropVariant@wil@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     PropVariantToIDList @ 0x1806AA490 (PropVariantToIDList.c)
 */

__int64 __fastcall TaskbarPinHelper::Impl::GetAsShellItem(
        TaskbarPinHelper::Impl *this,
        void **a2,
        struct IShellItem **a3)
{
  int ObjectW; // eax
  HRESULT v5; // ebx
  void *v7; // rcx
  __int64 v8; // rdx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // [rsp+28h] [rbp-28h] BYREF
  char v12; // [rsp+30h] [rbp-20h]
  LPVOID pv; // [rsp+38h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]

  *a2 = 0LL;
  if ( *(_WORD *)this != 13 )
  {
    pv = 0LL;
    v11 = 0LL;
    v12 = 1;
    v5 = PropVariantToIDList(this, &v11, a3);
    if ( v12 )
    {
      v7 = pv;
      pv = v11;
      if ( v7 )
        CoTaskMemFree(v7);
    }
    if ( v5 >= 0 )
    {
      v5 = SHCreateItemFromIDList((LPCITEMIDLIST)pv, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, a2);
      if ( v5 >= 0 )
      {
        v10 = pv;
        pv = 0LL;
        if ( v10 )
          CoTaskMemFree(v10);
        return 0LL;
      }
      v8 = 46LL;
    }
    else
    {
      v8 = 45LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarPinHelper.h",
      (const char *)(unsigned int)v5);
    v9 = pv;
    pv = 0LL;
    if ( v9 )
      CoTaskMemFree(v9);
    return (unsigned int)v5;
  }
  ObjectW = wil::PropVariant::GetObjectW(this, (const struct _GUID *)a2, a2);
  v5 = ObjectW;
  if ( ObjectW < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (int)"Desktop\\Internal\\Shell\\Inc\\private\\TaskbarPinHelper.h",
      (const char *)(unsigned int)ObjectW);
    return (unsigned int)v5;
  }
  return 0LL;
}
