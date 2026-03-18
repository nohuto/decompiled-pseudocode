/*
 * XREFs of ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1801A5120
 * Callers:
 *     ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x1801A3BE8 (-CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1801A3D8C (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800D5FB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1800D6054 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CManipulationContext::RemoveInteractionLeafFromTree(struct CInteraction *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct CInteraction *v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  struct CInteraction **v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( (unsigned int)dword_1803E37D0 > 4 && tlgKeywordOn((__int64)&dword_1803E37D0, 2LL) )
  {
    v10 = 0;
    v8 = &v6;
    v6 = a1;
    v9 = 8;
    tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_18037DE02, 0LL, 0LL, 3u, &v7);
  }
  (*(void (__fastcall **)(char *))(*((_QWORD *)a1 + 8) + 48LL))((char *)a1 + 64);
  v3 = *((_QWORD *)a1 + 27);
  if ( v3 )
  {
    if ( *(struct CInteraction **)(v3 + 240) == a1 )
      *(_QWORD *)(v3 + 240) = *((_QWORD *)a1 + 28);
    *((_QWORD *)a1 + 27) = 0LL;
  }
  v4 = *((_QWORD *)a1 + 29);
  if ( v4 )
    *(_QWORD *)(v4 + 224) = *((_QWORD *)a1 + 28);
  v5 = *((_QWORD *)a1 + 28);
  if ( v5 )
    *(_QWORD *)(v5 + 232) = *((_QWORD *)a1 + 29);
  *((_QWORD *)a1 + 29) = 0LL;
  *((_QWORD *)a1 + 28) = 0LL;
  *((_QWORD *)a1 + 26) = 0LL;
}
