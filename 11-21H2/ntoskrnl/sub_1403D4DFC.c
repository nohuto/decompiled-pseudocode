/*
 * XREFs of sub_1403D4DFC @ 0x1403D4DFC
 * Callers:
 *     sub_140B240EC @ 0x140B240EC (sub_140B240EC.c)
 * Callees:
 *     <none>
 */

__int64 sub_1403D4DFC()
{
  int v0; // ecx
  int v1; // edx
  int v2; // eax
  unsigned __int16 *v3; // rax
  ULONG_PTR v4; // rax
  unsigned __int16 *v5; // rax
  __int64 result; // rax

  v0 = dword_140C11640;
  if ( (unsigned int)dword_140C11640 > 0x64 )
  {
    v0 = 100;
    dword_140C11640 = 100;
  }
  v1 = dword_140C11644;
  if ( (unsigned int)dword_140C11644 > 0x64 )
  {
    v1 = 100;
    dword_140C11644 = 100;
  }
  v2 = 5;
  if ( (_BYTE)dword_140D051DC )
    v2 = 10;
  dword_140C11660 = v0 + v2;
  dword_140C11560 = v1 + 7;
  v3 = 0LL;
  if ( (_UNKNOWN *)qword_140D31700[0] != &unk_140D3DDC0 )
    v3 = (unsigned __int16 *)qword_140D31700[0];
  v4 = **(_QWORD **)(*(_QWORD *)(*((_QWORD *)qword_140D06C40 + 2) + 8LL) + 8LL * *v3);
  if ( (v4 & 1) != 0 )
    v4 = 0LL;
  qword_140C11650 = v4;
  v5 = 0LL;
  if ( (_UNKNOWN *)qword_140D31700[0] != &unk_140D3DDC0 )
    v5 = (unsigned __int16 *)qword_140D31700[0];
  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)qword_140D06C40 + 2) + 8LL) + 8LL * *v5) + 8LL);
  if ( (result & 1) != 0 )
    result = 0LL;
  qword_140C11658 = result;
  return result;
}
