/*
 * XREFs of ??0NdisPoll@@QEAA@PEAX0P6AX0PEAU_NDIS_POLL_NOTIFICATION@@@ZP6AX0PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1C0134C50
 * Callers:
 *     ??$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX0PEAU_NDIS_POLL_DATA@@@Z@wil@@YA?AV?$unique_ptr@VNdisPoll@@U?$default_delete@VNdisPoll@@@wistd@@@wistd@@AEAPEAX0AEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX1PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1C00C0438 (--$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6A.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 */

NdisPoll *__fastcall NdisPoll::NdisPoll(
        NdisPoll *this,
        char *a2,
        void *a3,
        void (*a4)(void *, struct _NDIS_POLL_NOTIFICATION *),
        void (*a5)(void *, struct _NDIS_POLL_DATA *))
{
  NdisPoll *result; // rax

  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  memset((char *)this + 128, 0, 0x1B0uLL);
  *((_QWORD *)this + 73) = a5;
  *((_QWORD *)this + 74) = a2 + 5992;
  result = this;
  *((_QWORD *)this + 70) = a2;
  *((_QWORD *)this + 71) = a3;
  *((_QWORD *)this + 72) = a4;
  return result;
}
