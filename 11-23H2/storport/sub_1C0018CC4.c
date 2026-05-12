/*
 * XREFs of sub_1C0018CC4 @ 0x1C0018CC4
 * Callers:
 *     sub_1C0016A98 @ 0x1C0016A98 (sub_1C0016A98.c)
 * Callees:
 *     sub_1C0018D7C @ 0x1C0018D7C (sub_1C0018D7C.c)
 *     sub_1C0018DE8 @ 0x1C0018DE8 (sub_1C0018DE8.c)
 *     sub_1C0018E74 @ 0x1C0018E74 (sub_1C0018E74.c)
 *     sub_1C00740C0 @ 0x1C00740C0 (sub_1C00740C0.c)
 */

__int64 __fastcall sub_1C0018CC4(__int64 a1)
{
  int v1; // edi
  __int64 v3; // rcx
  __int64 result; // rax
  int v5; // r8d
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF

  v7 = 0;
  v6 = 0;
  v1 = 90112;
  v8 = 0;
  *(_DWORD *)(a1 + 4832) = 90112;
  *(_BYTE *)(a1 + 4830) = 2;
  if ( (int)sub_1C0018E74(a1, &v6) >= 0 )
  {
    if ( v6 )
    {
      if ( v6 < 0x16000 )
        v1 = v6;
      *(_DWORD *)(a1 + 4832) = v1;
    }
    else
    {
      *(_DWORD *)(a1 + 4832) = 0;
      *(_BYTE *)(a1 + 4830) = 0;
    }
  }
  if ( (int)sub_1C0018DE8(v3, &v7) >= 0 )
    *(_BYTE *)(a1 + 4830) = v7;
  *(_BYTE *)(a1 + 4831) = 0;
  result = sub_1C0018D7C(a1, &v8);
  if ( (int)result >= 0 )
    *(_BYTE *)(a1 + 4831) = v8;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 0x400) != 0
    && BYTE1(off_1C0093070->Timer) >= 5u )
  {
    return sub_1C00740C0(
             off_1C0093070->AttachedDevice,
             (unsigned int)&off_1C0093070,
             v5,
             *(unsigned __int8 *)(a1 + 4830),
             *(_DWORD *)(a1 + 4832));
  }
  return result;
}
