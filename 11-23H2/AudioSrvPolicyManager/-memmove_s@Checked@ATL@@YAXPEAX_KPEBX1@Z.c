/*
 * XREFs of ?memmove_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18002B86C
 * Callers:
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18000C970 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?RemoveAt@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHH@Z @ 0x180028F00 (-RemoveAt@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSim.c)
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180042074 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 *     ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x180044B48 (-RemoveAt@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccess.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180017592 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x180047698 (memmove_0.c)
 */

void __fastcall ATL::Checked::memmove_s(ATL::Checked *this, void *a2, const void *a3, void *a4)
{
  unsigned int v4; // ebx
  unsigned int *v5; // rax

  v4 = 0;
  if ( a4 )
  {
    if ( this && a3 )
    {
      if ( a2 >= a4 )
      {
        memmove_0(this, a3, (size_t)a4);
        goto LABEL_9;
      }
      v5 = (unsigned int *)_o__errno(this);
      v4 = 34;
    }
    else
    {
      v5 = (unsigned int *)_o__errno(this);
      v4 = 22;
    }
    *v5 = v4;
    invalid_parameter_noinfo();
  }
LABEL_9:
  ATL::AtlCrtErrorCheck(v4);
}
