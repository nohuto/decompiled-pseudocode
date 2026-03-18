/*
 * XREFs of ldevLoadImage @ 0x1C00BC1D0
 * Callers:
 *     ldevLoadDriver @ 0x1C0075290 (ldevLoadDriver.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00BC250 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     _wcsicmp @ 0x1C00D60C0 (_wcsicmp.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1C016F9B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@-$_tlgW.c)
 */

struct _LDEV *__fastcall ldevLoadImage(const WCHAR *a1, int a2, int *a3, int a4, int a5, const wchar_t **a6)
{
  int v6; // r15d
  struct _LDEV *ImageInternal; // rdi
  const wchar_t **v12; // rbx
  int v13; // [rsp+60h] [rbp-20h] BYREF
  int v14; // [rsp+64h] [rbp-1Ch] BYREF
  int v15; // [rsp+68h] [rbp-18h] BYREF
  int v16; // [rsp+6Ch] [rbp-14h] BYREF
  const wchar_t *v17; // [rsp+70h] [rbp-10h] BYREF
  __int64 v18; // [rsp+78h] [rbp-8h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+30h] BYREF

  v6 = a5;
  ImageInternal = ldevLoadImageInternal(a1, a2, a3, a4, a5);
  if ( !*a3 )
  {
    v12 = a6;
    if ( wcsicmp(*a6, L"cdd") )
    {
      if ( wcsicmp(*v12, L"rdpudd")
        && (unsigned int)dword_1C0288378 > 5
        && tlgKeywordOn((__int64)&dword_1C0288378, 0x400000000000LL) )
      {
        v15 = *((_DWORD *)v12 + 3);
        v16 = *((_DWORD *)v12 + 2);
        v17 = *v12;
        LODWORD(v19) = v6;
        v13 = a4;
        v14 = a2;
        v18 = 2048LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_1C0288378,
          (int)&dword_1C025C1FE,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v19);
      }
    }
  }
  return ImageInternal;
}
