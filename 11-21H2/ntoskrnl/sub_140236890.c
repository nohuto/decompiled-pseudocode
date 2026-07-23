/*
 * XREFs of sub_140236890 @ 0x140236890
 * Callers:
 *     __C_specific_handler @ 0x1403DF790 (__C_specific_handler.c)
 *     longjmp @ 0x1403DF970 (longjmp.c)
 *     RtlRestoreContext @ 0x140429CA0 (RtlRestoreContext.c)
 *     sub_140429FE0 @ 0x140429FE0 (sub_140429FE0.c)
 * Callees:
 *     sub_1402AB9C0 @ 0x1402AB9C0 (sub_1402AB9C0.c)
 *     sub_14042A530 @ 0x14042A530 (sub_14042A530.c)
 */

__int64 __fastcall sub_140236890(signed __int64 BugCheckParameter4, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  if ( BugCheckParameter4 >= 0 || (result = sub_1402AB9C0(a2, &v5, &v6, &v7), !(_BYTE)result) || a2 < v6 || a2 >= v7 )
  {
    __debugbreak();
    sub_14042A530(BugCheckParameter4);
  }
  return result;
}
