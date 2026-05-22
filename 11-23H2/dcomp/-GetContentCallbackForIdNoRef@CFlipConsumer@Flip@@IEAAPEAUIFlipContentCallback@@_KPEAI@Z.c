/*
 * XREFs of ?GetContentCallbackForIdNoRef@CFlipConsumer@Flip@@IEAAPEAUIFlipContentCallback@@_KPEAI@Z @ 0x1801AB1F8
 * Callers:
 *     ?ProcessRemoveContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandRemoveContent@@@Z @ 0x1801ABAC4 (-ProcessRemoveContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandRemoveContent.c)
 *     ?ProcessUpdateContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandUpdateContent@@@Z @ 0x1801ABBAC (-ProcessUpdateContent@CFlipConsumer@Flip@@IEAAJAEAPEAEPEAUFlipResourceUpdateCommandUpdateContent.c)
 * Callees:
 *     <none>
 */

struct IFlipContentCallback *__fastcall Flip::CFlipConsumer::GetContentCallbackForIdNoRef(
        Flip::CFlipConsumer *this,
        __int64 a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  unsigned int v5; // r10d
  unsigned int v6; // eax
  __int64 v7; // r11

  v3 = *((_DWORD *)this + 22);
  v4 = 0LL;
  v5 = -1;
  v6 = 0;
  if ( v3 )
  {
    v7 = *((_QWORD *)this + 8);
    while ( *(_QWORD *)(v7 + 16LL * v6) != a2 )
    {
      if ( ++v6 >= v3 )
        goto LABEL_7;
    }
    v4 = *(_QWORD *)(v7 + 16LL * v6 + 8);
    v5 = v6;
  }
LABEL_7:
  if ( a3 )
    *a3 = v5;
  return (struct IFlipContentCallback *)v4;
}
