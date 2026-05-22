/*
 * XREFs of GetAnimationScenarioNameFromGUID @ 0x180003470
 * Callers:
 *     ?AnimationLastFrameTelemetry@CAnimationFrameStats@@UEAAXAEBU_GUID@@UtagCOMPOSITION_TARGET_ID@@@Z @ 0x180003410 (-AnimationLastFrameTelemetry@CAnimationFrameStats@@UEAAXAEBU_GUID@@UtagCOMPOSITION_TARGET_ID@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001E424 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800691F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

int __fastcall GetAnimationScenarioNameFromGUID(unsigned int *a1, unsigned __int16 *a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v7; // [rsp+20h] [rbp-68h]
  int v8; // [rsp+28h] [rbp-60h]
  int v9; // [rsp+30h] [rbp-58h]
  int v10; // [rsp+38h] [rbp-50h]
  int v11; // [rsp+40h] [rbp-48h]
  int v12; // [rsp+48h] [rbp-40h]
  int v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]

  v4 = 0LL;
  while ( 1 )
  {
    v5 = *(_QWORD *)a1 - (_QWORD)*(&off_180218950 + 3 * v4 + 1);
    if ( *(wchar_t **)a1 == *(&off_180218950 + 3 * v4 + 1) )
      v5 = *((_QWORD *)a1 + 1) - (_QWORD)(&off_180218950)[3 * v4 + 1];
    if ( !v5 )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x54 )
    {
      v16 = *((unsigned __int8 *)a1 + 15);
      v15 = *((unsigned __int8 *)a1 + 14);
      v14 = *((unsigned __int8 *)a1 + 13);
      v13 = *((unsigned __int8 *)a1 + 12);
      v12 = *((unsigned __int8 *)a1 + 11);
      v11 = *((unsigned __int8 *)a1 + 10);
      v10 = *((unsigned __int8 *)a1 + 9);
      v9 = *((unsigned __int8 *)a1 + 8);
      v8 = *((unsigned __int16 *)a1 + 3);
      v7 = *((unsigned __int16 *)a1 + 2);
      return StringCchPrintfW(
               a2,
               a3,
               L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
               *a1,
               v7,
               v8,
               v9,
               v10,
               v11,
               v12,
               v13,
               v14,
               v15,
               v16);
    }
  }
  return StringCchCopyW(a2, a3, (&off_180218950)[3 * v4]);
}
