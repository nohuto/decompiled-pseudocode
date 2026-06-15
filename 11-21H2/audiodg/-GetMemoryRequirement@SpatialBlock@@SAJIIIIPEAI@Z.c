/*
 * XREFs of ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x140091A4C
 * Callers:
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x140091464 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x1400921A4 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x1400922C8 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z @ 0x1400915F0 (-GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z.c)
 */

__int64 __fastcall SpatialBlock::GetMemoryRequirement(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int *v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // r14
  int AlignedBufferSize; // ebx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // edi
  unsigned int v20[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = a1;
  v5 = a5;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  AlignedBufferSize = SpatialBlock::GetAlignedBufferSize(a1, &v22);
  if ( AlignedBufferSize >= 0 )
  {
    if ( (unsigned __int64)(v7 * v6) > 0xFFFFFFFF )
    {
      v10 = 277LL;
    }
    else
    {
      v11 = 2LL * (unsigned int)(v7 * v6);
      if ( v11 > 0xFFFFFFFF )
      {
        v10 = 278LL;
      }
      else if ( (unsigned __int64)(v7 * v8) > 0xFFFFFFFF )
      {
        v10 = 282LL;
      }
      else
      {
        v12 = 2LL * (unsigned int)(v7 * v8);
        if ( v12 > 0xFFFFFFFF )
        {
          v10 = 283LL;
        }
        else
        {
          v13 = v7 * v22;
          if ( v13 > 0xFFFFFFFF )
          {
            v10 = 287LL;
          }
          else
          {
            v14 = 2LL * (unsigned int)v13;
            if ( v14 > 0xFFFFFFFF )
            {
              v10 = 288LL;
            }
            else
            {
              v15 = v11 + 28;
              if ( (unsigned int)v11 < 0xFFFFFFE4 )
              {
                v16 = v15 + v12;
                if ( v16 < v15 )
                {
                  v10 = 293LL;
                }
                else
                {
                  v20[0] = v16;
                  v17 = SpatialBlock::GetAlignedBufferSize(v16, v20);
                  v18 = v17;
                  if ( v17 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x126,
                      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
                      (const char *)(unsigned int)v17);
                    return v18;
                  }
                  if ( v20[0] + (unsigned int)v14 >= v20[0] )
                  {
                    *v5 = v20[0] + v14;
                    return 0LL;
                  }
                  *v5 = -1;
                  v10 = 296LL;
                }
              }
              else
              {
                v10 = 292LL;
              }
            }
          }
        }
      }
    }
    AlignedBufferSize = -2147024362;
  }
  else
  {
    v10 = 272LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
    (const char *)(unsigned int)AlignedBufferSize);
  return (unsigned int)AlignedBufferSize;
}
