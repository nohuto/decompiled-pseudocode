/*
 * XREFs of sub_1407FE344 @ 0x1407FE344
 * Callers:
 *     sub_1407FF888 @ 0x1407FF888 (sub_1407FF888.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwWriteEndScenario @ 0x14081CDA0 (EtwWriteEndScenario.c)
 */

__int64 __fastcall sub_1407FE344(int a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v4; // [rsp+48h] [rbp-20h]
  __int64 v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = a1;
  if ( byte_140C5AE14 )
  {
    v2 = MEMORY[0xFFFFF78000000014];
    v3.Ptr = (ULONGLONG)&v6;
    v4 = &v2;
    *(_QWORD *)&v3.Size = 4LL;
    v5 = 8LL;
    return EtwWriteEndScenario(RegHandle, &stru_14000F008, &OutputBuffer, 2u, &v3);
  }
  return result;
}
