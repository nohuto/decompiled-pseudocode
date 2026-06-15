/*
 * XREFs of ?GetMemoryRequirement@SpatialBlock@@SAJIIIIPEAI@Z @ 0x14009D88C
 * Callers:
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14009D340 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14009DDD8 (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUtWAVEFORMATEX@@PEBGIIIIIPEAPEAUICrossProcessMemory@@@Z @ 0x14009DEFC (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemoryManager@@PEAUt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z @ 0x14009D4B4 (-GetAlignedBufferSize@SpatialBlock@@SAJIPEAI@Z.c)
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
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  unsigned int v17[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF

  v19 = a1;
  v5 = a5;
  v6 = a2;
  v7 = a4;
  v8 = a3;
  AlignedBufferSize = SpatialBlock::GetAlignedBufferSize(a1, &v19);
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
          v13 = v7 * v19;
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
              if ( (unsigned int)v11 >= 0xFFFFFFE4 )
              {
                v10 = 292LL;
              }
              else if ( v15 + (unsigned int)v12 < v15 )
              {
                v10 = 293LL;
              }
              else
              {
                v17[0] = v15 + v12;
                AlignedBufferSize = SpatialBlock::GetAlignedBufferSize(v15 + (unsigned int)v12, v17);
                if ( AlignedBufferSize < 0 )
                {
                  v10 = 294LL;
                  goto LABEL_25;
                }
                if ( (unsigned int)(v14 + v17[0]) >= v17[0] )
                {
                  *v5 = v14 + v17[0];
                  return 0LL;
                }
                *v5 = -1;
                v10 = 296LL;
              }
            }
          }
        }
      }
    }
    AlignedBufferSize = -2147024362;
    goto LABEL_25;
  }
  v10 = 272LL;
LABEL_25:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
    (const char *)(unsigned int)AlignedBufferSize);
  return (unsigned int)AlignedBufferSize;
}
