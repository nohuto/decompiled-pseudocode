/*
 * XREFs of IoSetActivityIdIrp @ 0x14020C120
 * Callers:
 *     sub_14020BA48 @ 0x14020BA48 (sub_14020BA48.c)
 *     IoReuseIrp @ 0x14020BE20 (IoReuseIrp.c)
 *     sub_140556BE4 @ 0x140556BE4 (sub_140556BE4.c)
 * Callees:
 *     sub_14020B888 @ 0x14020B888 (sub_14020B888.c)
 *     sub_14020C420 @ 0x14020C420 (sub_14020C420.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 */

__int64 __fastcall IoSetActivityIdIrp(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  v4 = 0;
  v5 = sub_14020C420(a1, 0LL);
  if ( v5 )
  {
    if ( a2 )
    {
      *(_OWORD *)(v5 + 24) = *a2;
      return v4;
    }
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 152) )
    {
      v4 = EtwActivityIdControl(1u, (LPGUID)(v5 + 24));
      if ( (v4 & 0x80000000) == 0 )
        return v4;
    }
    else
    {
      v4 = -1073741637;
    }
    sub_14020B888(a1, 0, 1);
    return v4;
  }
  return 3221225626LL;
}
