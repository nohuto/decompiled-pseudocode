/*
 * XREFs of ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x1C011D054
 * Callers:
 *     ?ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z @ 0x1C002FE24 (-ndisIfReadNetworkGuidFromKey@@YAJAEAVKRegKey@@PEAU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C011DC54 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     netsetupIsImpliedProperty @ 0x1C011DD9C (netsetupIsImpliedProperty.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B7B0 (--1KRegKey@@QEAA@XZ.c)
 *     KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___ @ 0x1C0139D00 (KRegKey--QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadGuid(
        NetSetupPropertyBag *this,
        const struct _NETSETUPPROPKEY *a2,
        struct _GUID *a3)
{
  unsigned int v4; // ebx
  int v6; // r10d
  unsigned int v8; // edi
  HANDLE Handle; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+28h] [rbp-20h] BYREF

  v4 = 0;
  Handle = 0LL;
  v6 = NetSetupPropertyBag::OpenPropertyKey(this, a2, (struct KRegKey *)&Handle);
  if ( v6 == -1073741772 )
  {
    if ( (unsigned __int8)netsetupIsImpliedProperty(a2) )
    {
      *a3 = 0LL;
      goto LABEL_4;
    }
LABEL_3:
    v4 = v6;
LABEL_4:
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v4;
  }
  if ( v6 )
    goto LABEL_3;
  v10 = 0LL;
  v8 = KRegKey::QueryValueBlob__lambda_70cb5823003e089218b0c358f25a9137___(&Handle, &v10, a3);
  if ( Handle )
    ZwClose(Handle);
  return v8;
}
