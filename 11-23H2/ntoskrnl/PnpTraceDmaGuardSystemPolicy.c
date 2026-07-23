/*
 * XREFs of PnpTraceDmaGuardSystemPolicy @ 0x140864338
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x140812204 (PipDmgInitPhaseTwo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void PnpTraceDmaGuardSystemPolicy()
{
  int v0; // [rsp+30h] [rbp-68h] BYREF
  __int64 v1; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v3; // [rsp+60h] [rbp-38h]
  int v4; // [rsp+68h] [rbp-30h]
  int v5; // [rsp+6Ch] [rbp-2Ch]
  int *v6; // [rsp+70h] [rbp-28h]
  int v7; // [rsp+78h] [rbp-20h]
  int v8; // [rsp+7Ch] [rbp-1Ch]

  if ( (unsigned int)dword_140C03918 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C03918, 0x400000000000LL) )
    {
      v5 = 0;
      v8 = 0;
      v3 = &v1;
      v0 = PipDmaGuardPolicy;
      v7 = 4;
      v6 = &v0;
      v1 = 2048LL;
      v4 = 8;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03918, (unsigned __int8 *)word_14002CBD2, 0LL, 0LL, 4u, &v2);
    }
  }
}
