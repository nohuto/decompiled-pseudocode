/*
 * XREFs of ?ReadKnobFromKey@NetSetupKnobCollection@@EEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x1C01405B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C011CA20 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C011DA88 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C011DB2C (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z @ 0x1C0120204 (-ValidateKnobValue@KnobCollection@@QEAAJAEA_KAEBUKnobDescriptor@@@Z.c)
 *     ?LookupNetSetupPropertyKey@@YAJPEB_WAEAU_NETSETUPPROPKEY@@@Z @ 0x1C01403F8 (-LookupNetSetupPropertyKey@@YAJPEB_WAEAU_NETSETUPPROPKEY@@@Z.c)
 */

__int64 __fastcall NetSetupKnobCollection::ReadKnobFromKey(
        NetSetupKnobCollection *this,
        struct KRegKey *a2,
        const struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  __int64 result; // rax
  const wchar_t *Name; // rcx
  ConfigKnobFlag Flags; // eax
  unsigned int v10; // ecx
  unsigned __int64 v11; // rax
  bool v12; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v13; // [rsp+24h] [rbp-3Ch] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  struct KRegKey *v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+38h] [rbp-28h] BYREF
  int v17; // [rsp+48h] [rbp-18h]

  v14 = 0LL;
  if ( !a2->m_ptr )
    return 3221226021LL;
  Name = a3->Name;
  v15 = a2;
  v17 = 0;
  v16 = 0LL;
  result = LookupNetSetupPropertyKey(Name, (struct _NETSETUPPROPKEY *)&v16);
  if ( !(_DWORD)result )
  {
    Flags = a3->Flags;
    if ( (Flags & 4) != 0 )
    {
      v10 = NetSetupPropertyBag::ReadUint64((NetSetupPropertyBag *)&v15, (const struct _NETSETUPPROPKEY *)&v16, &v14);
    }
    else
    {
      if ( (Flags & 2) != 0 )
      {
        v12 = 0;
        v10 = NetSetupPropertyBag::ReadBoolean((void ***)&v15, (const struct _NETSETUPPROPKEY *)&v16, &v12);
        v11 = v12;
      }
      else
      {
        v13 = 0;
        v10 = NetSetupPropertyBag::ReadUint32((NetSetupPropertyBag *)&v15, (const struct _NETSETUPPROPKEY *)&v16, &v13);
        v11 = v13;
      }
      v14 = v11;
    }
    if ( !v10 )
    {
      v10 = KnobCollection::ValidateKnobValue(this, &v14, a3);
      if ( !v10 )
        *(_QWORD *)a4 = v14;
    }
    return v10;
  }
  return result;
}
