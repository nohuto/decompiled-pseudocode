/*
 * XREFs of ??0NdisPoll@@QEAA@PEAX0P6AX0PEAU_NDIS_POLL_NOTIFICATION@@@ZP6AX0PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1C0140A04
 * Callers:
 *     ??$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX0PEAU_NDIS_POLL_DATA@@@Z@wil@@YA?AV?$unique_ptr@VNdisPoll@@U?$default_delete@VNdisPoll@@@wistd@@@wistd@@AEAPEAX0AEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6AX1PEAU_NDIS_POLL_DATA@@@Z@Z @ 0x1C00C5024 (--$make_unique_nothrow@VNdisPoll@@AEAPEAXAEAPEAXAEBQ6AXPEAXPEAU_NDIS_POLL_NOTIFICATION@@@ZAEBQ6A.c)
 * Callees:
 *     memset @ 0x1C0038580 (memset.c)
 */

NdisPoll *__fastcall NdisPoll::NdisPoll(
        NdisPoll *this,
        char *a2,
        void *a3,
        void (*a4)(void *, struct _NDIS_POLL_NOTIFICATION *),
        void (*a5)(void *, struct _NDIS_POLL_DATA *))
{
  NdisPoll *result; // rax

  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  memset((char *)this + 136, 0, 0x1B0uLL);
  *((_QWORD *)this + 74) = a5;
  *((_QWORD *)this + 75) = a2 + 6000;
  result = this;
  *((_QWORD *)this + 71) = a2;
  *((_QWORD *)this + 72) = a3;
  *((_QWORD *)this + 73) = a4;
  return result;
}
