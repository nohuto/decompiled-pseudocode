/*
 * XREFs of ?InitializeDisplayUserModeDriverNames@ADAPTER_RENDER@@AEAAJPEAU_UNICODE_STRING@@0@Z @ 0x1C0204438
 * Callers:
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0203930 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0026CEC (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::InitializeDisplayUserModeDriverNames(
        ADAPTER_RENDER *this,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3)
{
  struct _UNICODE_STRING v3; // xmm0
  __int64 result; // rax
  unsigned __int64 v7; // r11
  unsigned __int16 v8; // cx
  struct _UNICODE_STRING v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v10 = 0LL;
  result = 0LL;
  v9 = v3;
  if ( a2->Length )
  {
    result = RtlStringCbLengthW(v3.Buffer, a2->Length, &v10);
    if ( (int)result < 0 )
    {
      WdLogSingleEntry3(3LL, 0LL, *((_QWORD *)this + 2), (int)result);
      return 0LL;
    }
    else
    {
      v8 = v10;
      v9.Length = v10;
      if ( v7 > v10 )
        v8 = v10 + 2;
      v9.MaximumLength = v8;
      *a3 = v9;
    }
  }
  return result;
}
