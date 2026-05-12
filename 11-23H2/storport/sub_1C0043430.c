/*
 * XREFs of sub_1C0043430 @ 0x1C0043430
 * Callers:
 *     sub_1C0040378 @ 0x1C0040378 (sub_1C0040378.c)
 *     DllUnload @ 0x1C0065590 (DllUnload.c)
 * Callees:
 *     sub_1C0041B20 @ 0x1C0041B20 (sub_1C0041B20.c)
 */

__int64 __fastcall sub_1C0043430(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  signed __int32 v5; // edi
  __int64 v7; // [rsp+20h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  DestinationString = 0LL;
  if ( qword_1C0093C98 )
  {
    byte_1C0093BC1 = 0;
    _m_prefetchw(&dword_1C0093B5C);
    v4 = (unsigned int)dword_1C0093B5C;
    v5 = _InterlockedOr(&dword_1C0093B5C, 0);
    if ( v5 )
    {
      v3 = -1073740024;
    }
    else if ( _InterlockedExchange64(&qword_1C0093C98, 0LL) )
    {
      qword_1C0093CA0 = 0LL;
      qword_1C0093C70 = 0LL;
      qword_1C0093CA8 = 0LL;
      qword_1C0093C80 = 0LL;
      qword_1C0093CC0 = 0LL;
      qword_1C0093CB0 = 0LL;
      qword_1C0093C90 = 0LL;
      qword_1C0093CB8 = 0LL;
      qword_1C0093BB8 = 0LL;
      qword_1C0093BC8 = 0LL;
      qword_1C0093BB0 = 0LL;
      qword_1C0093CC8 = 0LL;
      qword_1C0093C60 = 0LL;
      qword_1C0093C68 = 0LL;
      ObfDereferenceObject(Object);
      Object = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\StorportExt");
      ZwUnloadDriver(&DestinationString);
    }
    if ( (byte_1C0093A06 & 0x40) != 0 )
    {
      LODWORD(v7) = v5;
      sub_1C0041B20(v4, a2, a3, v3, v7);
    }
  }
  return v3;
}
