/*
 * XREFs of ?AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x1400170B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateAPOConnectionDescriptor@@YAJPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140010AA0 (-ValidateAPOConnectionDescriptor@@YAJPEAUAPO_CONNECTION_DESCRIPTOR@@@Z.c)
 *     ?GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x140010B50 (-GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x140015A0C (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?CalculateAlignmentMask@@YAIPEBU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x1400171BC (-CalculateAlignmentMask@@YAIPEBU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14007AB54 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectCache::AllocateConnectionBuffer(
        void **this,
        struct APO_CONNECTION_DESCRIPTOR *a2,
        unsigned __int64 *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  unsigned __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // r9d
  unsigned int v12; // r11d
  __int64 v13; // r14
  unsigned int v14; // r10d
  unsigned int v15; // edi
  __int64 v16; // r8
  __int64 result; // rax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  _UNCOMPRESSEDAUDIOFORMAT v21; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( this[5] )
  {
    v6 = ValidateAPOConnectionDescriptor(a2);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C7,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
        (const char *)(unsigned int)v6,
        v21.guidFormatType.Data1);
      return v7;
    }
    if ( a2->pBuffer )
    {
      v18 = -2147467261;
      v19 = 712LL;
    }
    else
    {
      GetAudioFormat(a2->pFormat, &v21);
      v8 = v21.dwBytesPerSampleContainer * (unsigned __int64)v21.dwSamplesPerFrame;
      if ( v8 > 0xFFFFFFFF )
      {
        v19 = 721LL;
      }
      else if ( (unsigned int)v8 * (unsigned __int64)a2->u32MaxFrameCount > 0xFFFFFFFF )
      {
        v19 = 725LL;
      }
      else
      {
        v9 = CalculateAlignmentMask(&v21);
        v13 = v9;
        v15 = v14 + v9;
        if ( v14 + v9 >= v14 )
        {
          if ( v11 <= v12 )
            v11 = v12;
          if ( v15 < v11 )
          {
            v18 = -2147024809;
            v19 = 734LL;
          }
          else
          {
            v16 = AE_ALLOCATE_SAFEMULT(
                    v10,
                    v15,
                    this[5],
                    (__int64 (__fastcall *)(unsigned __int64, void *))AERTAllocate);
            if ( v16
              || (AERTAddMemoryToHeap(this[5], 20 * v15),
                  (v16 = AE_ALLOCATE_SAFEMULT(
                           v20,
                           v15,
                           this[5],
                           (__int64 (__fastcall *)(unsigned __int64, void *))AERTAllocate)) != 0) )
            {
              a2->pBuffer = ~v13 & (v13 + v16);
              result = 0LL;
              *a3 = v16;
              return result;
            }
            v18 = -2147024882;
            v19 = 751LL;
          }
          goto LABEL_22;
        }
        v19 = 731LL;
      }
      v18 = -2147024362;
    }
  }
  else
  {
    v18 = -2005139383;
    v19 = 710LL;
  }
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
    (const char *)v18,
    v21.guidFormatType.Data1);
  return v18;
}
