/*
 * XREFs of ndisIsBindPathEnabled @ 0x1C013CA98
 * Callers:
 *     ndisIsLwfBindingEnabled @ 0x1C013CC04 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C013CCA8 (ndisIsLwfBindingEnabled_0.c)
 *     ndisIsProtocolBindingEnabled @ 0x1C013CD38 (ndisIsProtocolBindingEnabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C01128CC (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C011DB2C (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C012B770 (--1KRegKey@@QEAA@XZ.c)
 */

__int64 __fastcall ndisIsBindPathEnabled(wchar_t *a1, char a2, bool *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  const struct _NETSETUPPROPKEY *v8; // rbx
  unsigned int v9; // esi
  HANDLE v10; // rcx
  HANDLE Handle; // [rsp+20h] [rbp-60h] BYREF
  void **p_Handle; // [rsp+28h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  int v14; // [rsp+40h] [rbp-40h]
  __int128 v15; // [rsp+44h] [rbp-3Ch]
  int v16; // [rsp+54h] [rbp-2Ch]
  __int128 v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+68h] [rbp-18h]
  char v19; // [rsp+6Ch] [rbp-14h] BYREF

  Handle = 0LL;
  v5 = KRegKey::Open((KRegKey *)&Handle, 8u, a1, 0LL);
  v6 = v5;
  if ( v5 )
  {
    if ( v5 == -1073741772 )
    {
LABEL_7:
      v10 = Handle;
      *a3 = a2 ^ 1;
      if ( v10 )
        ZwClose(v10);
      return 0LL;
    }
    else
    {
      KRegKey::~KRegKey((KRegKey *)&Handle);
      return v6;
    }
  }
  else
  {
    v8 = (const struct _NETSETUPPROPKEY *)&v13;
    v14 = 80;
    v13 = xmmword_1C00E4780;
    v16 = 82;
    v18 = 84;
    v15 = xmmword_1C00E4738;
    p_Handle = &Handle;
    v17 = xmmword_1C00E4828;
    while ( 1 )
    {
      v9 = NetSetupPropertyBag::ReadBoolean(&p_Handle, v8, a3);
      if ( v9 != -1073741772 )
        break;
      v8 = (const struct _NETSETUPPROPKEY *)((char *)v8 + 20);
      if ( v8 == (const struct _NETSETUPPROPKEY *)&v19 )
        goto LABEL_7;
    }
    KRegKey::~KRegKey((KRegKey *)&Handle);
    return v9;
  }
}
