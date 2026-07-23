/*
 * XREFs of sub_1407FF3B4 @ 0x1407FF3B4
 * Callers:
 *     sub_14038B9A0 @ 0x14038B9A0 (sub_14038B9A0.c)
 * Callees:
 *     sub_1407FF3EC @ 0x1407FF3EC (sub_1407FF3EC.c)
 */

__int64 sub_1407FF3B4()
{
  __int64 result; // rax

  result = sub_1407FF3EC();
  if ( (_BYTE)result )
  {
    dword_140D06BFC = 330;
    dword_140D06C00 = 150;
  }
  else
  {
    dword_140D06BFC = dword_140D052D0;
    result = (unsigned int)dword_140D052CC;
    dword_140D06C00 = dword_140D052CC;
  }
  return result;
}
