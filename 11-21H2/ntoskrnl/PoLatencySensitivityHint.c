/*
 * XREFs of PoLatencySensitivityHint @ 0x1402244A0
 * Callers:
 *     sub_14069DD40 @ 0x14069DD40 (sub_14069DD40.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 * Callees:
 *     sub_140224624 @ 0x140224624 (sub_140224624.c)
 *     sub_14022475C @ 0x14022475C (sub_14022475C.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_1403559B0 @ 0x1403559B0 (sub_1403559B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall PoLatencySensitivityHint(int a1)
{
  int v2; // r8d
  _BYTE *i; // rax
  REGHANDLE v4; // rsi
  __int64 v5; // rdx
  bool v6; // r11
  signed __int32 v7[8]; // [rsp+0h] [rbp-70h] BYREF
  int v8; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( !byte_140C23B18 || a1 != 4 )
  {
    v2 = 0;
    for ( i = (char *)&off_140C03040[534 * dword_140C232CC + 14] + 5; !*i; ++i )
    {
      if ( (unsigned int)++v2 >= 2 )
        return;
    }
    v8 = a1;
    if ( byte_140C5AE30 )
    {
      v4 = qword_140C1F580;
      if ( EtwEventEnabled(qword_140C1F580, &stru_14000E900) )
      {
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v8;
        EtwWriteEx(v4, &stru_14000E900, 0LL, 0, 0LL, 0LL, 1u, &UserData);
      }
    }
    v10 = 0LL;
    v6 = (unsigned __int8)sub_1403559B0(&qword_140C239A8, qword_140C204C0 + MEMORY[0xFFFFF78000000008], &v9) != 0;
    if ( a1 == 4 && (unsigned __int8)sub_1403559B0(&qword_140C239A0, v5, &v10) || v6 )
    {
      _InterlockedOr(v7, 0);
      if ( a1 == 4 && v10 <= qword_140C204C8 || v9 <= qword_140C204C8 )
      {
        if ( (unsigned __int8)sub_140224624() )
        {
          sub_14022475C(3LL);
        }
        else if ( !_InterlockedExchange(&dword_140C239B0, 1) )
        {
          ExQueueWorkItem(&stru_140C239C0, CustomPriorityWorkQueue|NormalWorkQueue|0x18);
        }
      }
    }
  }
}
