/*
 * XREFs of ?AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000C7FC (-GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?ValidateUncompressedFrameFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x1400107E8 (-ValidateUncompressedFrameFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140010CC0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x14001F108 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14006E350 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectCache::AllocateConnectionBuffer(
        CDeviceGraphObjectCache *this,
        struct APO_CONNECTION_DESCRIPTOR *a2,
        unsigned __int64 *a3)
{
  int v6; // ebx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  DWORD v9; // ecx
  unsigned int v10; // ebx
  unsigned int v11; // r9d
  unsigned int v12; // esi
  void *v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  _UNCOMPRESSEDAUDIOFORMAT v17; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*((_QWORD *)this + 5) )
  {
    v6 = -2005139383;
    v15 = 710LL;
    goto LABEL_30;
  }
  if ( !a2 || a2->u32Signature != 1094927443 || !a2->u32MaxFrameCount )
  {
    v6 = -2147024809;
    goto LABEL_29;
  }
  v6 = ValidateUncompressedFrameFormat(a2->pFormat);
  if ( v6 < 0 )
  {
LABEL_29:
    v15 = 711LL;
    goto LABEL_30;
  }
  if ( a2->pBuffer )
  {
    v6 = -2147467261;
    v15 = 712LL;
  }
  else
  {
    GetAudioFormat(a2->pFormat, &v17);
    v7 = v17.dwBytesPerSampleContainer * (unsigned __int64)v17.dwSamplesPerFrame;
    if ( v7 > 0xFFFFFFFF )
    {
      v6 = -2147024362;
      v15 = 721LL;
    }
    else
    {
      v8 = (unsigned int)v7 * (unsigned __int64)a2->u32MaxFrameCount;
      if ( v8 > 0xFFFFFFFF )
      {
        v6 = -2147024362;
        v15 = 725LL;
      }
      else
      {
        v9 = v17.dwBytesPerSampleContainer * v17.dwSamplesPerFrame;
        v10 = 15;
        v11 = 16;
        if ( v17.dwBytesPerSampleContainer * v17.dwSamplesPerFrame > 0x10 )
        {
          v10 = v9 - 1;
          if ( ((v9 - 1) & v9) != 0 )
          {
            do
              v11 *= 2;
            while ( v9 / v11 );
            v10 = v11 - 1;
          }
        }
        v12 = v10 + v8;
        if ( v10 + (unsigned int)v8 < (unsigned int)v8 )
        {
          v6 = -2147024362;
          v15 = 731LL;
        }
        else
        {
          if ( a2->u32MaxFrameCount > (unsigned int)v7 )
            LODWORD(v7) = a2->u32MaxFrameCount;
          if ( v12 < (unsigned int)v7 )
          {
            v6 = -2147024809;
            v15 = 734LL;
          }
          else
          {
            if ( is_mul_ok(1uLL, v12) && (v13 = AERTAllocate(v12, *((void **)this + 5))) != 0LL
              || (AERTAddMemoryToHeap(*((void **)this + 5), 20 * v12),
                  (v13 = AE_ALLOCATE_SAFEMULT(v16, v12, *((void **)this + 5), AERTAllocate)) != 0LL) )
            {
              a2->pBuffer = ~(unsigned __int64)v10 & ((unsigned __int64)v13 + v10);
              result = 0LL;
              *a3 = (unsigned __int64)v13;
              return result;
            }
            v6 = -2147024882;
            v15 = 751LL;
          }
        }
      }
    }
  }
LABEL_30:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
    (const char *)(unsigned int)v6,
    v17.guidFormatType.Data1);
  return (unsigned int)v6;
}
