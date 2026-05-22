/*
 * XREFs of ?Initialize@CFlipConsumerMessage@Flip@@AEAAJPEAVCFlipProducer@2@@Z @ 0x1801AC948
 * Callers:
 *     ?Create@CFlipConsumerMessage@Flip@@SAJPEAVCFlipProducer@2@PEAPEAV12@@Z @ 0x1801AC828 (-Create@CFlipConsumerMessage@Flip@@SAJPEAVCFlipProducer@2@PEAPEAV12@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x1801B22A0 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 *     ?HRESULTFromNTSTATUS@@YAJJ@Z @ 0x1801B246C (-HRESULTFromNTSTATUS@@YAJJ@Z.c)
 */

__int64 __fastcall Flip::CFlipConsumerMessage::Initialize(
        Flip::CFlipConsumerMessage *this,
        struct Flip::CFlipProducer *a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD *v7; // rsi
  int NextMessageToProducer; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0;
  v4 = NtFlipObjectQueryNextMessageToProducer(*((_QWORD *)a2 + 3), &v12);
  v5 = HRESULTFromNTSTATUS(v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = 41;
    goto LABEL_8;
  }
  v7 = (_QWORD *)((char *)this + 16);
  v5 = DynArrayImpl<0>::AddMultiple((char *)this + 16, 1LL, v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = 44;
    goto LABEL_8;
  }
  NextMessageToProducer = NtFlipObjectReadNextMessageToProducer(*((_QWORD *)a2 + 3), v12, *v7);
  v5 = HRESULTFromNTSTATUS(NextMessageToProducer);
  v6 = v5;
  if ( v5 < 0 )
  {
    v10 = 50;
LABEL_8:
    DoStackCaptureDirect(v5, v10);
    return v6;
  }
  v9 = v12;
  *((_QWORD *)this + 7) = *v7;
  *((_DWORD *)this + 16) = v9;
  return v6;
}
